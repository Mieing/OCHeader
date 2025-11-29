@class NSString, NSData, NSDictionary;

@interface WAFavoriteData : NSObject <PBCoding>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *pagepath;
@property (nonatomic) unsigned int debugMode;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSString *sourceDisplayName;
@property (retain, nonatomic) NSString *defaultLink;
@property (nonatomic) BOOL disableForward;
@property (retain, nonatomic) NSString *messageExtraData;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSData *thumbData;
@property (retain, nonatomic) NSDictionary *wmpfCustomParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_pagepath;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_sourceType;
+ (void)PBArrayAdd_sourceDisplayName;
+ (void)PBArrayAdd_defaultLink;
+ (void)PBArrayAdd_disableForward;
+ (void)PBArrayAdd_messageExtraData;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_thumbData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
