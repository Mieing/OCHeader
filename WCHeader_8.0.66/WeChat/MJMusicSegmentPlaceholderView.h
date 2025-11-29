@class NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol MJSegmentReusableViewDelegate;

@interface MJMusicSegmentPlaceholderView : UICollectionReusableView <MJSegmentReusableView>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGR;
@property (weak, nonatomic) id<MJSegmentReusableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)layoutViews;
- (void)handleTapGesture:(id)a0;
- (void)updatePlaceholderLeadingOffset:(double)a0;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void).cxx_destruct;

@end
