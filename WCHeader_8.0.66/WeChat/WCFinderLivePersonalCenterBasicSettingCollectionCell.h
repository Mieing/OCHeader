@class WCTableViewManager, FinderLivePersonalCenterPrepareInfo;
@protocol WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate;

@interface WCFinderLivePersonalCenterBasicSettingCollectionCell : UICollectionViewCell

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (nonatomic) BOOL reportedExposeLiveMention;
@property (weak, nonatomic) id<WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate> actionDelegate;
@property (retain, nonatomic) FinderLivePersonalCenterPrepareInfo *userInfo;

+ (double)cellHeightWithInfo:(id)a0;
+ (id)cellID;
+ (BOOL)showRecentWatch:(id)a0;
+ (BOOL)showReservedRecord:(id)a0;
+ (BOOL)showMention;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setup;
- (void)reloadTableView;
- (id)setUpMentionCellWithRedDot;
- (id)getRightViewByRightRedDot:(id)a0;
- (id)getCommentSceneStr;
- (void)reportCellExpose;
- (void)reportMentionCellWithActionType:(unsigned long long)a0;
- (void)onPrivateMsgClicked;
- (void)onPrivacyClicked;
- (void)onRewardLevelClicked;
- (void)onSettingsClicked;
- (void)onRecentWatchClicked;
- (void)onReservedRecordClicked;
- (void)onMentionClicked;
- (void).cxx_destruct;

@end
