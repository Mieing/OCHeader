@class NSString, UIImageView, MMUIWindow, MMWebImageView, AppGameRecordVideoMessageViewModel, MMUILabel;

@interface AppGameRecordVideoMessageCellView : CommonMessageCellView <MMMediaRecorderPlayerDelegate>

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMWebImageView *xmaskView;
@property (retain, nonatomic) UIImageView *playIconImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (nonatomic) double descHeight;
@property (nonatomic) double currentY;
@property (retain, nonatomic) MMUIWindow *fullScreenWindow;
@property (readonly, nonatomic) AppGameRecordVideoMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)canBeReused;
- (void)onTouchUpInside;
- (void)layoutContentView;
- (id)displayViewForImageBrowser;
- (void)initBgImageView;
- (void)initTitleView;
- (void)initDescView;
- (void)initPageImageView;
- (void)initPlayImageView;
- (void)initMaskImageView;
- (BOOL)isReady;
- (void)checkReady;
- (BOOL)onClickAction:(id)a0;
- (void)onCreate;
- (void)onStartPlayer;
- (void)onPausePlayer;
- (void)onClosePlayer;
- (void)onEndPlayer;
- (void)onForward;
- (void)onDirect:(id)a0;
- (id)getMessageWrap;
- (void)openAppBrand:(id)a0 oMessageWrap:(id)a1;
- (void).cxx_destruct;

@end
