@protocol AWEMRRecordJournalRow;

@interface AWEAboutDouyinSettingCellController : AWESettingsTableViewCellBaseController

@property (retain, nonatomic) id<AWEMRRecordJournalRow> badgeRecordToken;
@property (nonatomic) BOOL didTrackCellShow;

+ (id)detailTitle;

- (void)didSelectCell;
- (void)trackCellClick;
- (void)didBindItemModel;
- (void)recordBadgeShowIfNeeded;
- (void)trackCellShowIfNeeded;
- (void)recordBadgeConsumeIfNeeded;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)willDisplayCell;

@end
