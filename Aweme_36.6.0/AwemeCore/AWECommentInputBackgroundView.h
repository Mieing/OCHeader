@class NSString;
@protocol AWECommentInputBackgroundViewDelegate;

@interface AWECommentInputBackgroundView : UIView <AWECommentInputBackgroundViewProtocol>

@property (copy, nonatomic) id /* block */ didUpdateLayoutBlock;
@property (weak, nonatomic) id<AWECommentInputBackgroundViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)currentCommentInputView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)refreshLayout;

@end
