@class UIView, NSString, UIImage, AWECustomPhotoStickerEditConfig, AWECustomPhotoStickerEditIconView, UIImageView, YYAnimatedImageView, AWECustomStickerEditContainer, UILabel;
@protocol ACCLoadingViewProtocol;

@interface AWECustomPhotoStickerEditViewController : UIViewController <AWECustomStickerEditContainerDelegate>

@property (retain, nonatomic) AWECustomPhotoStickerEditConfig *config;
@property (retain, nonatomic) YYAnimatedImageView *animatedImageView;
@property (retain, nonatomic) AWECustomStickerEditContainer *editContainer;
@property (nonatomic) struct CGSize { double width; double height; } aniContainerSize;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AWECustomPhotoStickerEditIconView *clipIconView;
@property (retain, nonatomic) AWECustomPhotoStickerEditIconView *cropIconView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *confirmLabel;
@property (nonatomic) long long currentStatus;
@property (retain, nonatomic) id clipRequest;
@property (weak, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (retain, nonatomic) UIImageView *backwardView;
@property (retain, nonatomic) UIImageView *forwardView;
@property (retain, nonatomic) UIImageView *resetView;
@property (retain, nonatomic) UIImage *imgToReset;
@property (nonatomic) BOOL canReset;
@property (nonatomic) long long currentTab;
@property (retain, nonatomic) UIView *pointView;
@property (nonatomic) BOOL isCropped;
@property (nonatomic) BOOL imageClipStatus;
@property (nonatomic) BOOL imageCropStatus;
@property (nonatomic) BOOL isOriginImage;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ clickOnRemoveBgBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackClick:(id)a0;
- (void)setUpBottomView;
- (void)setUpNewEditView;
- (void)clickOnProcessArea;
- (void)clickOnCropImage;
- (void)clickOnResetView;
- (void)clickOnCancelBtn:(id)a0;
- (void)clickOnConfirmBtn;
- (void)updateInfoWithStatus:(long long)a0;
- (void)applyNewClip;
- (void)addLoadingAnimation;
- (void)customStickerCutoutByLocalModel;
- (void)customStickerCutoutByServer;
- (void)trackForCustomStickerCutoutWithSuccess:(BOOL)a0 error:(id)a1;
- (void)setForwardViewEnabled:(BOOL)a0;
- (void)setBackwardViewEnabled:(BOOL)a0;
- (void)isImageCropped:(BOOL)a0;
- (void)isImageReseted:(BOOL)a0;
- (void)clickOnForwardView;
- (void)clickOnBackwardView;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
