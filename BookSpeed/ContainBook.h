//
//  ContainBook.h
//  BookSpeed
//
//  Created by MAC on 19/05/2015.
//  Copyright (c) Năm 2015 FPTsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContainBook : NSObject
@property(nonatomic,assign) int bookID;
@property(nonatomic,assign) int numPage;
@property(nonatomic,strong) NSMutableArray *containOfPage;
@end
