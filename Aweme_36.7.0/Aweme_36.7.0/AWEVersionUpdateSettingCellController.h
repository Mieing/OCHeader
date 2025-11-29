@protocol AWEMRRecordJournalRow;

@interface AWEVersionUpdateSettingCellController : AWESettingsTableViewCellBaseController

@property (retain, nonatomic) id<AWEMRRecordJournalRow> badgeRecordToken;

+ (id)generateSettingItemModel;
+ (id)versionUpdateCellDetail;
+ (id)versionUpdateCellTitle;

- (void)didSelectCell;
- (void)trackCellClick;
- (void)didBindItemModel;
- (void)recordBadgeShowIfNeeded;
- (void)recordBadgeConsumeIfNeeded;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)willDisplayCell;

@end
