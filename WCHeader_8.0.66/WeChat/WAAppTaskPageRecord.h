@class NSString, NSMutableArray;

@interface WAAppTaskPageRecord : MMObject <PBCoding>

@property (nonatomic) unsigned int webviewId;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *lastPageJsError;
@property (copy, nonatomic) NSString *openType;
@property (copy, nonatomic) NSString *navId;
@property (nonatomic) BOOL isRecoverReloaded;
@property (nonatomic) BOOL hasHtmlWeb;
@property (nonatomic) BOOL isSkyline;
@property (retain, nonatomic) NSMutableArray *downloadedModulesWhenRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_webviewId;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_lastPageJsError;
+ (void)PBArrayAdd_openType;
+ (void)PBArrayAdd_navId;
+ (void)PBArrayAdd_isRecoverReloaded;
+ (void)PBArrayAdd_hasHtmlWeb;
+ (void)PBArrayAdd_isSkyline;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
