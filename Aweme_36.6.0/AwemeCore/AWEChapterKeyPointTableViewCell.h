@class UIView, NSString, AWERelatedVideoPlayingAnimationView, AWEChapterPanelUIConfig, UIImageView, AWEChapterInfo, UIButton, UILabel, AWEChapterContext;

@interface AWEChapterKeyPointTableViewCell : UITableViewCell <AWEChapterTableViewCellProtocol>

@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *playingAnimationView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *keyPointLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIButton *shareChapterButton;
@property (retain, nonatomic) UIButton *loopChapterButton;
@property (retain, nonatomic) AWEChapterPanelUIConfig *uiConfig;
@property (nonatomic) double timeLabelUniformWidth;
@property (copy, nonatomic) AWEChapterInfo *chapterInfo;
@property (copy, nonatomic) id /* block */ chapterShareButtonBlock;
@property (nonatomic) long long chapterIndex;
@property (nonatomic) long long chapterPanelStyle;
@property (copy, nonatomic) id /* block */ loopChapterButtonAction;
@property (retain, nonatomic) AWEChapterContext *chapterContext;
@property (nonatomic) BOOL isLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (double)heightWithChapterInfo:(id)a0 width:(double)a1 context:(id)a2;
+ (double)timeWidthWithModel:(id)a0;
+ (BOOL)panelUIFixEnable;
+ (id)fontWithWeight:(long long)a0 context:(id)a1;
+ (BOOL)enableLoopButton;
+ (double)timeWidthWithText:(id)a0 timestamp:(long long)a1 font:(id)a2;
+ (id)identifier;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)configWithUIConfig:(id)a0;
- (void)updateSelectedStatus:(BOOL)a0;
- (void)configureWithChapterInfo:(id)a0 model:(id)a1 context:(id)a2 coverImageLoadCompletion:(id /* block */)a3;
- (id /* block */)getChapterShareButtonAction;
- (void)setChapterShareButtonAction:(id /* block */)a0;
- (long long)getChapterIndex;
- (long long)getChapterPanelStyle;
- (id /* block */)getLoopChapterButtonAction;
- (void)hiddenBottomLine;
- (void)setupLoopButton;
- (void)configShareButton;
- (void)configWithChapterInfo:(id)a0;
- (void)updateKeyPointLabelLayout;
- (void)updateLoopButtonWithSelected:(BOOL)a0;
- (void)updateTitleLabelLayout;
- (id)fontWithWeight:(long long)a0;
- (struct CGSize { double x0; double x1; })playIconSize;
- (void)shareChapterButtonClicked:(id)a0;
- (void)loopChapterButtonClicked:(id)a0;
- (double)timeWidthWithText:(id)a0 timestamp:(long long)a1;
- (void).cxx_destruct;
- (BOOL)canBeShared;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupSubviews;
- (double)cellHeight;

@end
