@class NSString, NSMutableArray, NSMutableDictionary;

@interface WCSessionPageConfigModel : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *pagePaths;
@property (retain) NSMutableDictionary *pagePathsDicForKey;
@property (retain) NSMutableDictionary *pagePathsDicForSid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pagePaths;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)initCacheDictionary;
- (id)toString;
- (void).cxx_destruct;

@end
