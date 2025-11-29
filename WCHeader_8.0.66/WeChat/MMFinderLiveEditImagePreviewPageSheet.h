@class UIView, UILabel, NSString, UIImageView, MMPageSheetAdapter, WCFinderLiveNowView, WCFinderAuthInfoIconView, MMFinderLiveEditImagePreviewPageSheetModel, MMUILabel, WCFinderHeadImageView, RichTextView;

@interface MMFinderLiveEditImagePreviewPageSheet : UIView <MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMFinderLiveEditImagePreviewPageSheetModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double maxHeight;
@property (readonly, nonatomic) BOOL isOpening;
@property (retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (retain, nonatomic) MMUILabel *leftSubTitleLabel;
@property (retain, nonatomic) MMUILabel *rightSubTitleLabel;
@property (retain, nonatomic) UIImageView *coverForShareCardImageView;
@property (retain, nonatomic) UIImageView *coverForSquareImageView;
@property (retain, nonatomic) WCFinderLiveNowView *liveNowView;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) UIView *avatorContainer;
@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) RichTextView *nicknameTV;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *audienceNumLabel;
@property (retain, nonatomic) UIImageView *gradientViewForSquare;
@property (retain, nonatomic) UIImageView *gradientViewForShare;
@property (retain, nonatomic) UIImageView *finderIconImageView;
@property (retain, nonatomic) RichTextView *nicknameTVForShare;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconViewForShare;
@property (retain, nonatomic) RichTextView *mediaTitleTextViewForShare;
@property (retain, nonatomic) RichTextView *mediaTitleTextViewForSquare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bottomSafeAreaHeight:(double)a1;
- (void)setupWithBottomSafeArea:(double)a0;
- (void)relayoutNickname;
- (void)layoutSubviews;
- (void)layoutImageViews;
- (void)layoutBottomSubView;
- (double)targetCoverImageViewWidth:(double)a0;
- (double)shareCardImageWidth;
- (double)squareImageWidthWithViewWidth:(double)a0;
- (double)targetCoverImageViewHeight:(double)a0 ratio:(double)a1;
- (id)buildSubTitleLabel;
- (id)genNickNameTextView;
- (void)updatePageSheetModel:(id)a0;
- (void)openWithAnimation:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)closeWithAnimation:(BOOL)a0;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (double)pageSheetContentHeight;
- (void).cxx_destruct;

@end
