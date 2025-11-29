@class WCFinderSimpleFeedbackView, NSArray, NSString, UIView, WCFinderFeedbackReasonView, UIButton;
@protocol WCFinderFeedbackViewDelegate;

@interface WCFinderFeedbackView : UIView <WCFinderSimpleFeedbackViewDelegate, WCFinderFeedbackReasonViewDelegate>

@property (retain, nonatomic) NSArray *optionList;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorRect;
@property (retain, nonatomic) UIButton *backgroundMaskView;
@property (retain, nonatomic) UIView *triangleView;
@property (retain, nonatomic) WCFinderSimpleFeedbackView *simpleFeedbackView;
@property (retain, nonatomic) WCFinderFeedbackReasonView *reasonView;
@property (weak, nonatomic) id<WCFinderFeedbackViewDelegate> delegate;
@property (nonatomic) unsigned long long section;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setDescriptionJumpInfo:(id)a0;
- (void)changeAnchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)changeToFeedbackReasonView:(id)a0;
- (void)configTitle:(id)a0;
- (void)layoutSubview:(id)a0 anchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickBackgroundMaskView:(id)a0;
- (void)handleBackgroundMaskPanGesture:(id)a0;
- (void)onFinderSimpleFeedbackViewLikeButtonDidClick;
- (void)onFinderSimpleFeedbackViewDislikeButtonDidClick;
- (void)onFinderSimpleFeedbackViewComplainButtonDidClick;
- (void)onFinderSimpleFeedbackViewDescriptionJumpInfoDidClick:(id)a0;
- (void)onFinderFeedbackReasonViewShouldCloseWithSelectedReason:(id)a0;
- (void).cxx_destruct;

@end
