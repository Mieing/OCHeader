@class WCImageView, NSString, MMUILabel, UIView, UIButton;

@interface WCContentItemViewTemplateRedEnvelopesV4 : WCContentItemBaseView <WCImageViewDelegate, WCIMageGreetingExtV4> {
    WCImageView *_imageView;
    UIButton *_imageButton;
    MMUILabel *_moneyLabel;
    MMUILabel *_rmbLabel;
    UIView *_blurView;
}

@property (nonatomic) BOOL bTimeLineScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })getImageSize:(id)a0;
+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)updateImageButtonView;
- (void)initViewsWithWCDataItem:(id)a0;
- (void)layoutSubviews;
- (void)onImageBtnClick:(id)a0;
- (void)onReceiveRedEnvelopesClick;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onClickWCImage:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onLongPressedWCImage:(id)a0;
- (void)hideMenu;
- (void)onExposeFromImage:(id)a0;
- (void)onDownloadFinish:(id)a0;
- (id)getTimeLineViewController;
- (id)getTopViewController;
- (id)getNSStringFromTopViewControllerClass;
- (BOOL)isCurTopViewControllerMatchTheScene;
- (void)showGreetingView;
- (void)onShowGreetingView;
- (void)OnSuccessGreetingCallback;
- (void)onShowDetailView;
- (void)jumpDetailView;
- (void)onShowGreetingEntry;
- (void).cxx_destruct;

@end
