@class UIStackView, UIView, NSString, MJSegmentMuteInfoOverlay, MJSegmentViewModel, MJSegmentDurationInfoOverlay, MJSegmentCellBorderView, UIColor;
@protocol MJSegmentReusableViewDelegate;

@interface MJSegmentCell : UICollectionViewCell <MJSegmentReusableView>

@property (retain, nonatomic) UIView *contentBackgroundView;
@property (readonly, nonatomic) MJSegmentViewModel *viewModel;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (readonly, nonatomic) MJSegmentCellBorderView *borderView;
@property (retain, nonatomic) UIStackView *segmentInfoOverlayContainer;
@property (retain, nonatomic) MJSegmentDurationInfoOverlay *durationInfoOverlay;
@property (retain, nonatomic) MJSegmentMuteInfoOverlay *muteInfoOverlay;
@property (weak, nonatomic) id<MJSegmentReusableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setupWithSegmentViewModel:(id)a0;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (void)syncWithSegmentUIState;
- (void)syncWithMutation;
- (void)showBorderViewAnimated:(BOOL)a0;
- (void)hideBorderViewAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
