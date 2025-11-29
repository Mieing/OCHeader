@class UILabel, NSString, IESECCommentDetailModel, IESECGradientView, _IESECReviewsDetailLikeButton, IESECReviewsDetailPlayerManager, IESECGalleryBar, IESECReviewsDetailCarousel, _IESECReviewsDetailTimeIndicator, IESECReviewsDetailProgressSlider, _IESECReviewsDetailGraphicTagView, IESECFoldableTextView;
@protocol IESECReviewsDetailViewCellDelegate;

@interface IESECReviewsDetailViewCell : UICollectionViewCell <IESECGalleryBarDelegate, IESECReviewsDetailCarouselDelegate, IESECReviewsDetailPlayerDelegate> {
    UILabel *_authorLabel;
    _IESECReviewsDetailGraphicTagView *_graphicTagView;
    IESECGradientView *_textMaskView;
    IESECFoldableTextView *_foldableTextView;
    _IESECReviewsDetailLikeButton *_likeButton;
    IESECReviewsDetailCarousel *_carouselView;
    IESECGalleryBar *_galleryBar;
    IESECReviewsDetailProgressSlider *_progressSlider;
    _IESECReviewsDetailTimeIndicator *_timeIndicator;
    double _currentPlayerProgress;
    BOOL _isPlayingWhenActivateProgressSlider;
}

@property (retain, nonatomic) IESECCommentDetailModel *comment;
@property (nonatomic) long long maxHorizontalContentIndex;
@property (retain, nonatomic) IESECReviewsDetailPlayerManager *playerManager;
@property (weak, nonatomic) id<IESECReviewsDetailViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressSliderValueChanged:(id)a0;
- (void)updateCellWithModel:(id)a0;
- (void)carouselView:(id)a0 didScrollToIndex:(long long)a1;
- (double)galleryBar:(id)a0 progressForItemAtIndex:(long long)a1;
- (void)foldingButtonStateChanged:(id)a0;
- (void)willBecomeMainResponder;
- (void)player:(id)a0 currentTimeDidChange:(double)a1 totalDuration:(double)a2;
- (void)likedValueChanged:(id)a0;
- (void)progressSliderDragEntered:(id)a0;
- (void)progressSliderDragExited:(id)a0;
- (void)_setGalleryBarVisibility:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupSubviews;

@end
