@class NSString;

@interface GameCenterGlobalSettingFetchInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int lastGlobalSettingFetchTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastGlobalSettingFetchTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
