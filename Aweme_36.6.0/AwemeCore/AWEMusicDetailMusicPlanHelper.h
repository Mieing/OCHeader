@class AWEMusicActivityResourceInfo;

@interface AWEMusicDetailMusicPlanHelper : AWEMusicDetailFeatureHelper

@property (retain, nonatomic) AWEMusicActivityResourceInfo *activityResourceInfo;

- (void)goToActivityPage;
- (void)resetEntryShowInfo;
- (BOOL)entryFrequencyEnabled;
- (BOOL)entryFrequencyEnabledWithMusicActivityResourceInfo:(id)a0;
- (void)entryFrequencyReloadWithMusicActivityResourceInfo:(id)a0;
- (BOOL)shouldShowMusicPlanEntry:(id)a0;
- (void)trackShowMusicPlanEntryWithModel:(id)a0 activityResourceInfo:(id)a1;
- (void)markEntryShow;
- (BOOL)canShowMusicPlanEntryWith:(id)a0;
- (id)musicDetailEntryFrequencyV2Config;
- (void)resetEntryFrequencyValueWithMusicActivityResourceInfo:(id)a0;
- (void).cxx_destruct;

@end
