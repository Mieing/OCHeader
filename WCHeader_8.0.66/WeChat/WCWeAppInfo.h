@class NSString;

@interface WCWeAppInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int debugMode;
@property (retain, nonatomic) NSString *shareActionId;
@property (retain, nonatomic) NSString *messageExtraData;
@property (nonatomic) unsigned int isGame;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *preloadResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_shareActionId;
+ (void)PBArrayAdd_messageExtraData;
+ (void)PBArrayAdd_subType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
