@class MASConstraint, AWEIMMessage, UIImageView, AWEIMMessageAttachmentDownloadManagerHelper, UIView, UILabel, BDImageView;
@protocol IESIMGradientViewProtocol, AWEIMQuoteMessageV2Protocol, IESIMLocationAnchorViewProtocol;

@interface AWEIMQuoteImageContentView : UIView

@property (retain, nonatomic) UIImageView *quoteImageView;
@property (retain, nonatomic) BDImageView *giphyImageView;
@property (retain, nonatomic) UIView<IESIMLocationAnchorViewProtocol> *locationAnchorView;
@property (retain, nonatomic) UIView *quoteReplyLineView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UIImageView *livePhotoIcon;
@property (retain, nonatomic) MASConstraint *quoteImageViewLeftConstraint;
@property (retain, nonatomic) MASConstraint *quoteImageViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *quoteReplyLineViewLeftConstraint;
@property (retain, nonatomic) MASConstraint *quoteCommentLabelLeftConstraint;
@property (retain, nonatomic) MASConstraint *quoteCommentLabelTopConstraint;
@property (retain, nonatomic) MASConstraint *quoteCommentLabelBottomConstraint;
@property (retain, nonatomic) MASConstraint *quoteLabelLeftConstraint;
@property (retain, nonatomic) AWEIMMessage<AWEIMQuoteMessageV2Protocol> *message;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *gradientView;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadManagerHelper *downloadManagerHelper;
@property (readonly, nonatomic) UILabel *quoteLabel;
@property (nonatomic) double radius;
@property (nonatomic) struct CGSize { double width; double height; } playIconSize;

+ (struct CGSize { double x0; double x1; })contentSizeWhenShowQuoteLabelWithText:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateContentSizeWithImageSize:(struct CGSize { double x0; double x1; })a0 shouldShowCommentLabel:(BOOL)a1;

- (void)p_chatBackgroundDidChangeNty:(id)a0;
- (void)completeCoverageTaskForMessage:(id)a0 error:(id)a1;
- (BOOL)p_needResizeImage:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)showPlayIcon;
- (void)downloadImageWithLocalImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 message:(id)a2;
- (void)hideAuthorInfoView;
- (void)downloadImageWithUrlList:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 placeholder:(id)a2;
- (void)setQuoteDisplayImage:(id)a0;
- (void)downloadImageWithImageSize:(struct CGSize { double x0; double x1; })a0 isFixMode:(BOOL)a1;
- (void)p_showLocationAnchorIfNeeded;
- (void)p_tryFixInvalidVideoCoverWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setQuoteReplyImage:(id)a0;
- (void)p_resizeImageIfNeed:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)p_getImageWithFilePath:(id)a0 decodeForDisplay:(BOOL)a1;
- (void)showImageWithMessage:(id)a0 defaultImage:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (void)updateQuoteImagePosition:(unsigned long long)a0;
- (void)updateVoiceOverWithText:(id)a0;
- (void)hidePlayIcon;
- (void)showLivePhotoTag;
- (void)hideLivePhotoTag;
- (void)showAuthorInfoView;
- (void)adjustPlayIconWidthHeight:(double)a0;
- (void)resetPlayIconWidthHeight;
- (void)showGIFWithMessage:(id)a0 defaultImage:(id)a1;
- (void)downloadImageWithLocalImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 urlList:(id)a2;
- (void)downloadImageWithLocalImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 urlModel:(id)a2;
- (id)getCacheImageIfNeedWithUniqueId:(id)a0;
- (void)initSubviews;
- (void).cxx_destruct;
- (id)init;
- (double)cornerRadius;
- (void)dealloc;
- (void)setupUI;
- (void)setupSubviews;
- (void)setupLayout;

@end
