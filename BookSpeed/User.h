//
//  User.h
//  BookSpeed
//
//  Created by MAC on 19/05/2015.
//  Copyright (c) Năm 2015 FPTsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject
@property(nonatomic,assign) int userID;
@property(nonatomic,strong) NSString *userName;
@property(nonatomic,strong) NSString *userPassword;
@property(nonatomic,strong) NSMutableArray *userBookFavorite;

@end
