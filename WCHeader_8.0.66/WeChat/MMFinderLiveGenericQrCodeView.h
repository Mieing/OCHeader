@class UIView, NSString, UIImage, WCFinderContact, MMFinderLiveTask, UIImageView, MMFinderLiveNoticePosterModel, MMLiveTaskId, WCFinderAuthInfoIconView, WCFinderHeadImageView, FinderLiveShareLiveQRCodeInfo, UILabel;
@protocol MMFinderLiveGenericQrCodeViewDelegate;

@interface MMFinderLiveGenericQrCodeView : UIView <MMLivePosterViewProviding>

@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (retain, nonatomic) FinderLiveShareLiveQRCodeInfo *qrCodeInfo;
@property (retain, nonatomic) MMFinderLiveNoticePosterModel *posterModel;
@property (nonatomic) BOOL isNormalAudience;
@property (retain, nonatomic) NSString *backgroundImageUri;
@property (nonatomic) BOOL previewBackgroundImageSet;
@property (retain, nonatomic) UIImage *previewBackgroundImage;
@property (nonatomic) unsigned long long currentStyleIndex;
@property (nonatomic) unsigned long long committedStyleIndex;
@property (retain, nonatomic) UIView *roundedCornerContainerView;
@property (retain, nonatomic) UIView *masterContainerView;
@property (retain, nonatomic) UIView *backgroundImageContainer;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *backgroundImageShadingView;
@property (retain, nonatomic) UIImageView *brandLogoView;
@property (retain, nonatomic) UILabel *brandLabel;
@property (retain, nonatomic) WCFinderHeadImageView *anchorAvatarView;
@property (retain, nonatomic) UILabel *anchorDisplayNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *anchorVerificationStatusView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *qrCodeContainer;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UILabel *scanTipsLabel;
@property (retain, nonatomic) UIView *posterBackgroundImageContainer;
@property (retain, nonatomic) UIImageView *posterBackgroundImageView;
@property (retain, nonatomic) UIView *posterBackgroundImageShadingView;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveGenericQrCodeViewDelegate> delegate;
@property (readonly, nonatomic) BOOL hasBackgroundImage;
@property (readonly, nonatomic) NSString *currentStyleId;
@property (nonatomic) BOOL backgroundImageSettingsButtonHidden;
@property (readonly, nonatomic) UIImage *snapshotImage;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithAnchorContact:(id)a0 qrCodeInfo:(id)a1 posterModel:(id)a2 isNormalAudience:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)setBackgroundImageUrl:(id)a0 completionBlock:(id /* block */)a1;
- (void)setPreviewBackgroundImage:(id)a0 completionBlock:(id /* block */)a1;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(id /* block */)a0;
- (void)advancePreviewStyle;
- (void)advanceToPreviewStyle:(unsigned long long)a0;
- (void)commitPreviewStyle;
- (void)revertPreviewStyle;
- (void)layoutSubviews;
- (void)onImageSettingsButtonTapped;
- (void)initUI;
- (void)configureComponentsStyle;
- (void)updateWithAnchorFinderContact:(id)a0;
- (void)updateWithQrCodeInfo:(id)a0;
- (void)configureBackgroundImage:(BOOL)a0;
- (void)layoutWithBackgroundImage;
- (void)layoutWithoutBackgroundImage;
- (struct { struct CGSize { double x0; double x1; } x0; double x1; })currentTitleLayoutAttributes;
- (void)transformMasterContainerToCenter;
- (void).cxx_destruct;

@end
