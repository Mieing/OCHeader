@class NSString, NSData, NSDictionary;

@interface WATimelineData : NSObject <PBCoding>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *pagepath;
@property (nonatomic) unsigned int debugMode;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSData *thumbImageData;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *linkUrl;
@property (retain, nonatomic) NSString *defaultUrl;
@property (retain, nonatomic) NSString *shareActionId;
@property (nonatomic) BOOL isGame;
@property (retain, nonatomic) NSString *messageExtraData;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *preloadResources;
@property (retain, nonatomic) NSString *liteGameInfo;
@property (nonatomic) unsigned int appBrandPriority;
@property (retain, nonatomic) NSString *liteAppBizData;
@property (nonatomic) unsigned int liteAppPriority;
@property (retain, nonatomic) NSDictionary *wmpfCustomParams;
@property (nonatomic) long long contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_pagepath;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_thumbImageData;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_linkUrl;
+ (void)PBArrayAdd_defaultUrl;
+ (void)PBArrayAdd_shareActionId;
+ (void)PBArrayAdd_isGame;
+ (void)PBArrayAdd_messageExtraData;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_preloadResources;
+ (void)PBArrayAdd_liteGameInfo;
+ (void)PBArrayAdd_appBrandPriority;
+ (void)PBArrayAdd_liteAppBizData;
+ (void)PBArrayAdd_liteAppPriority;
+ (void)PBArrayAdd_contentType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
