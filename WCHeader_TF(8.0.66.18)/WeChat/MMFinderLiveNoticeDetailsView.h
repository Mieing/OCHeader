@class UIView, NSString, FinderLiveNoticeInfo, UIImage, WCFinderContact, UIImageView, MMFinderLiveNoticePosterModel, UIButton, WCFinderAuthInfoIconView, NSDateFormatter, WCFinderHeadImageView, UILabel;
@protocol MMFinderLiveNoticeDetailsViewDelegate;

@interface MMFinderLiveNoticeDetailsView : UIView

@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) MMFinderLiveNoticePosterModel *posterModel;
@property (retain, nonatomic) NSString *backgroundImageUri;
@property (nonatomic) BOOL previewBackgroundImageSet;
@property (retain, nonatomic) UIImage *previewBackgroundImage;
@property (retain, nonatomic) NSDateFormatter *untimedNoticeTimeFormatter;
@property (nonatomic) unsigned long long currentStyleIndex;
@property (nonatomic) unsigned long long committedStyleIndex;
@property (retain, nonatomic) UIView *roundedCornerContainerView;
@property (retain, nonatomic) UIView *masterContainerView;
@property (retain, nonatomic) UIView *backgroundImageContainer;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *backgroundImageShadingView;
@property (retain, nonatomic) UIImageView *brandLogoView;
@property (retain, nonatomic) UILabel *brandLabel;
@property (retain, nonatomic) UIButton *backgroundImageSettingsButton;
@property (retain, nonatomic) WCFinderHeadImageView *anchorAvatarView;
@property (retain, nonatomic) UILabel *anchorDisplayNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *anchorVerificationStatusView;
@property (retain, nonatomic) UILabel *noticeRecommendationLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *introductionLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *qrCodeContainer;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UILabel *reserveHintLabel;
@property (retain, nonatomic) UILabel *couponLabel;
@property (retain, nonatomic) UIView *posterBackgroundImageContainer;
@property (retain, nonatomic) UIImageView *posterBackgroundImageView;
@property (retain, nonatomic) UIView *posterBackgroundImageShadingView;
@property (weak, nonatomic) id<MMFinderLiveNoticeDetailsViewDelegate> delegate;
@property (readonly, nonatomic) BOOL hasBackgroundImage;
@property (readonly, nonatomic) NSString *currentStyleId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithAnchroFinderContact:(id)a0 previewModel:(id)a1 posterModel:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)updateWithAnchorFinderContact:(id)a0 noticeInfo:(id)a1 posterModel:(id)a2 completionBlock:(id /* block */)a3;
- (void)setBackgroundImageUri:(id)a0 completionBlock:(id /* block */)a1;
- (void)setPreviewBackgroundImage:(id)a0 completionBlock:(id /* block */)a1;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(id /* block */)a0;
- (id)noticeDetailsImage;
- (void)advancePreviewStyle;
- (void)advanceToPreviewStyle:(unsigned long long)a0;
- (void)commitPreviewStyle;
- (void)revertPreviewStyle;
- (void)layoutSubviews;
- (void)onImageSettingsButtonTapped;
- (void)initializeComponents;
- (void)configureComponentsStyle;
- (void)updateWithAnchorFinderContact:(id)a0;
- (void)updateWithPreviewModel:(id)a0;
- (void)updateWithNoticeInfo:(id)a0;
- (void)configureViewsForShowingBackgroundImage:(BOOL)a0;
- (void)layoutWithBackgroundImage;
- (void)layoutWithoutBackgroundImage;
- (struct { struct CGSize { double x0; double x1; } x0; double x1; })currentTitleLayoutAttributes;
- (struct { struct CGSize { double x0; double x1; } x0; double x1; })currentIntroductionTitleLayoutAttributes;
- (void)transformMasterContainerToCenter;
- (BOOL)isMemberLiveNotice:(id)a0;
- (void).cxx_destruct;

@end
