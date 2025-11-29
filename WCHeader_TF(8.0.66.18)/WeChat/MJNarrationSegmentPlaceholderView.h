@class NSString;
@protocol MJSegmentReusableViewDelegate;

@interface MJNarrationSegmentPlaceholderView : UICollectionReusableView <MJSegmentReusableView>

@property (weak, nonatomic) id<MJSegmentReusableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutViews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void).cxx_destruct;

@end
