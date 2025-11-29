@class NSString;

@interface WCFinderPostReportModuleModel : NSObject <PBCoding>

@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *identification;
@property (nonatomic) long long startTimeStamp;
@property (nonatomic) long long endTimeStamp;
@property (nonatomic) long long duration;
@property (nonatomic) unsigned long long endReasonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pageName;
+ (void)PBArrayAdd_moduleName;
+ (void)PBArrayAdd_startTimeStamp;
+ (void)PBArrayAdd_endTimeStamp;
+ (void)PBArrayAdd_identification;
+ (void)PBArrayAdd_endReasonType;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)getKeyNameByPageName:(id)a0 moduleName:(id)a1 identification:(id)a2;
+ (id)getKeyNameByPageName:(id)a0 moduleName:(id)a1;

- (id)getPBPropertyTable;
- (id)initWithPageName:(id)a0 moduleName:(id)a1 identification:(id)a2;
- (id)initWithModuleName:(id)a0 identification:(id)a1;
- (id)currentKey;
- (id)currentModelKey;
- (void).cxx_destruct;

@end
