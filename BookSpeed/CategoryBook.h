//
//  CategoryBook.h
//  BookSpeed
//
//  Created by MAC on 19/05/2015.
//  Copyright (c) Năm 2015 FPTsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CategoryBook : NSObject
@property (nonatomic,assign) int categoryID;
@property (nonatomic,strong) NSString *categoryName;
@property (nonatomic,strong) NSString *categoryDetail;
@end
