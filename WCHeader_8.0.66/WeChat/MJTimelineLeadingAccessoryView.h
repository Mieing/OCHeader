@class MJPublisherButton, MJTimelineViewModel, NSString;
@protocol MJSegmentReusableViewDelegate;

@interface MJTimelineLeadingAccessoryView : UICollectionReusableView <MJSegmentReusableView>

@property (retain, nonatomic) MJPublisherButton *volumeButton;
@property (retain, nonatomic) MJTimelineViewModel *timelineVM;
@property (weak, nonatomic) id<MJSegmentReusableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupViews;
- (void)volumeButtonTouchUpInside:(id)a0;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void).cxx_destruct;

@end
