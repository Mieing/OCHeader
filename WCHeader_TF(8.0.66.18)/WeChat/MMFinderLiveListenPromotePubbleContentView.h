@class MMUILabel, MMWebImageView, MMUIButton, FinderLiveListenPromoteInfo;

@interface MMFinderLiveListenPromotePubbleContentView : MMFinderLivePromotePubbleContentView

@property (retain, nonatomic) MMWebImageView *backgroundImgView;
@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) FinderLiveListenPromoteInfo *listenPromoteInfo;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (nonatomic) BOOL downLoadImageSuccess;

+ (void)preloadListenBgWithPromoteMsgInfo:(id)a0;
+ (void)preloadWithUrl:(id)a0;

- (void)convertPromoteMsgInfo:(id)a0;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (void)reportCurrentPromoteData;
- (id)getCurrentPromoteBuffer;
- (void)layoutUI;
- (id)getActionButtonBackgroundColor;
- (id)getActionButtonColor;
- (BOOL)isUseDarkMode;
- (BOOL)isUseSpecialConfig;
- (void)refreshData;
- (void)updateCoverImgViewWithUrl:(id)a0;
- (void)updateBackgroundImgViewWithUrl:(id)a0;
- (BOOL)shouldBeAccessibilityElement;
- (void)handleSingleTapGesture:(id)a0;
- (void)actionButtonClicked;
- (void)onPromoteButtonClicked:(BOOL)a0;
- (void)onTapAction:(BOOL)a0;
- (void)layoutBackgroundImgView;
- (void)layoutTitleImgView;
- (void)layoutActionButton;
- (void)updateActionButtonWithPromoteInfo:(id)a0;
- (void)layoutTitleLabel;
- (double)getLabelWidth:(double)a0;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void)categoryItem:(id)a0 onLikeStatusChanged:(BOOL)a1;
- (void)updateDisMiss;
- (void)onShowed;
- (void)onClosed;
- (id)onPromoteBubbleActionExtraInfo;
- (void).cxx_destruct;

@end
