@class BrandProfileFuwuContainerView, NSString, UIView;
@protocol BrandProfileFuwuActionSheetDelegate;

@interface BrandProfileFuwuActionSheet : MMPageSheetBaseViewController <BrandProfileFuwuContainerViewDelegate, IUiUtilExt>

@property (weak, nonatomic) id<BrandProfileFuwuActionSheetDelegate> delegate;
@property (retain, nonatomic) UIView *transparentView;
@property (retain, nonatomic) BrandProfileFuwuContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)initPageSheetConfig;
- (void)setupContainerView;
- (void)showInViewController:(id)a0;
- (void)setDisplayName:(id)a0;
- (void)setFuwuInfoList:(id)a0;
- (void)setBrandType:(unsigned long long)a0;
- (void)onTappedFuwuInfo:(id)a0;
- (void)onTappedCancel;
- (void)onMainWindowFrameChanged;
- (void)dismissWithAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
