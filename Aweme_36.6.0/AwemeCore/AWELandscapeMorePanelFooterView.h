@class AWELandscapePageContext, DUXSwitch, AWEAwemeModel, UIView, UILabel, AWELandscapePlaybackSettingView;
@protocol AWELandscapeMorePanelViewDelegate;

@interface AWELandscapeMorePanelFooterView : UICollectionReusableView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *skipSwitchTitleLabel;
@property (retain, nonatomic) UILabel *skipSwitchSubTitleLabel;
@property (retain, nonatomic) DUXSwitch *skipSwitch;
@property (retain, nonatomic) AWELandscapePlaybackSettingView *playbackSettingView;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (copy, nonatomic) id /* block */ landScapeStartTimestampBlock;
@property (weak, nonatomic) id<AWELandscapeMorePanelViewDelegate> interactionDelegate;

+ (double)calculateHeightWithModel:(id)a0;
+ (BOOL)longVideoSkipOpeningEndingEnableWithModel:(id)a0;
+ (BOOL)playbackSettingEnableWithModel:(id)a0;

- (void)updateWithModel:(id)a0 pageContext:(id)a1;
- (void)setupSkipAdUIIfNeeded;
- (void)setupPlaybackSettingUIIfNeeded;
- (void)trackSkipSwitchClick:(BOOL)a0;
- (void)trackPlaybackSettingChangeFrom:(id)a0 to:(id)a1;
- (void)trackPlaybackSettingChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
