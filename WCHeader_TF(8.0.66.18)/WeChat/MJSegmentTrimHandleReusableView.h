@class NSString, UIView;
@protocol MJSegmentReusableViewDelegate, MJSegmentTrimHandleProtocol;

@interface MJSegmentTrimHandleReusableView : UICollectionReusableView <MJSegmentReusableView>

@property (retain, nonatomic) UIView<MJSegmentTrimHandleProtocol> *backingView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } trimHandleViewInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } leftHitInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } rightHitInsets;
@property (nonatomic) BOOL isLeftExpandable;
@property (nonatomic) BOOL isRightExpandable;
@property (weak, nonatomic) id<MJSegmentReusableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViews;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (void)willDisplay;
- (void)didEndDisplaying;
- (BOOL)respondsToPanGesture:(id)a0;
- (unsigned long long)trimmingEdgeForPanGesture:(id)a0;
- (void)showSnapIndicatorLineWithEdge:(unsigned long long)a0;
- (void)hideSnapIndicatorLine;
- (void)showSnapIndicatorDotWithEdge:(unsigned long long)a0;
- (void)hideSnapIndicatorDot;
- (void).cxx_destruct;

@end
