//
//  Book.h
//  BookSpeed
//
//  Created by MAC on 19/05/2015.
//  Copyright (c) Năm 2015 FPTsoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ContainBook.h"

@interface Book : NSObject
@property(nonatomic,assign) int bookID;
@property(nonatomic,strong) NSString *bookTitle;
@property(nonatomic,strong) NSString *bookAuthor;
@property(nonatomic,assign) int bookCategoryID;
@property(nonatomic,assign) long bookViewNumber;
@property(nonatomic,strong) ContainBook *bookContain;
@property(nonatomic,strong) NSString *bookImage;


@end
