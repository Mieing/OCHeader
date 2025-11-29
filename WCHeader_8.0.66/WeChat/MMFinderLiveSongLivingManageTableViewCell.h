@class PAGView, MMUILabel, MMUIButton;

@interface MMFinderLiveSongLivingManageTableViewCell : MMFinderLiveSongManageTableViewCell

@property (retain, nonatomic) PAGView *playingAnimationView;
@property (readonly, nonatomic) MMUILabel *rankLabel;
@property (readonly, nonatomic) MMUILabel *requestMemDescLabel;
@property (readonly, nonatomic) MMUILabel *heartValueLabel;
@property (readonly, nonatomic) MMUIButton *finishButton;
@property (readonly, nonatomic) MMUIButton *singButton;
@property (nonatomic) BOOL isPreparedToSing;

+ (double)preferHeight;
+ (id)identifier;
+ (double)getSeparatorLeftInset;

- (id)createFinishButton;
- (id)createRequestMemDescLabel;
- (id)createRankLabel;
- (id)createHeartValueLabel;
- (id)createSingButton;
- (void)prepareForReuse;
- (void)onTapGesture:(id)a0;
- (void)reset;
- (void)layoutUI;
- (void)updateMusicLabel;
- (void)updateMusicNameLabelOrigin;
- (void)updateMusicLabelWidth;
- (void)refreshUI;
- (void)setRankIndex:(unsigned int)a0;
- (double)warningPadding;
- (void)layoutRankLabel;
- (void)layoutRequestMemDescLabel;
- (void)layoutFinishButton;
- (void)layoutHeartValueLabel;
- (void)layoutPlayingAnimationView;
- (void)layoutSingButton;
- (void)updateRankLabel;
- (void)updateRequestMemDescLabel;
- (id)getDisplayMemNames;
- (unsigned long long)getDisplayMemCount;
- (BOOL)shouldHideHeartValueLabel;
- (void)updateHeartValueLabel;
- (void)updateFinishButton;
- (void)updatePlayingAnimationView;
- (void)finishButtonAction;
- (void)singButtonAction;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (double)adjustedLeftOffsetForEditing;
- (void).cxx_destruct;

@end
