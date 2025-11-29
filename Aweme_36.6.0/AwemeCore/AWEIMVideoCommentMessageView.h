@class AWEIMVideoCommentMessageProps, NSString, AWEIMRefreshImageView, YYLabel;

@interface AWEIMVideoCommentMessageView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEIMVideoCommentMessageProps *props;
@property (retain, nonatomic) AWEIMRefreshImageView *videoCoverImageView;
@property (retain, nonatomic) YYLabel *commentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getDrawFrameForImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
