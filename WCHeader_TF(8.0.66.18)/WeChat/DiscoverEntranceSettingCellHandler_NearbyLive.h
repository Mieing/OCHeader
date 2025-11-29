@class DiscoverEntranceSetSwitchInfo;

@interface DiscoverEntranceSettingCellHandler_NearbyLive : DiscoverEntranceSettingAbstractCellHandler

@property (nonatomic) BOOL nearbyPeopleEntranceEnabled;
@property (retain, nonatomic) DiscoverEntranceSetSwitchInfo *nearByPeopleSwitchInfo;

- (id)init;
- (id)title;
- (id)iconImage;
- (BOOL)originalEntraceSwitchOn;
- (unsigned long long)settingEntranceSwitchType;
- (id)makeSettingSheetView;
- (void)onSheetDisppearWithSwitchChanged:(id)a0;
- (void)commitNewNearbyPeopleEntranceValue:(BOOL)a0;
- (id)statusDesc;
- (void).cxx_destruct;

@end
