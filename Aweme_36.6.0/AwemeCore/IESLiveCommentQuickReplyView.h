@class CAGradientLayer, NSArray, NSString, UIScrollView, NSMutableArray;
@protocol IESLiveCommentQuickReplyDelegate;

@interface IESLiveCommentQuickReplyView : UIView <UIScrollViewDelegate>

@property (copy, nonatomic) NSArray *quickReplyContents;
@property (retain, nonatomic) NSMutableArray *contentViews;
@property (retain, nonatomic) UIScrollView *scrollContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (weak, nonatomic) id<IESLiveCommentQuickReplyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContents:(id)a0 contentColor:(id)a1;
- (void)setupUIWithContentColor:(id)a0;
- (void)quickReplyClick:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
