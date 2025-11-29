@class NSArray;

@interface MMFinderLivePartialInvisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo

@property (retain, nonatomic) NSArray *originalChoosedContactList;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyInfosFromSettingInfo:(id)a0;
- (void)recoverInfosToInitParam:(id)a0;
- (BOOL)isSettingEnabled;
- (id)getDescriptionForCurrentSetting;
- (void).cxx_destruct;

@end
