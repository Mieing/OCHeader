@class CAGradientLayer;
@protocol IESLiveListViewEventDelegate;

@interface IESLiveMessageListTableView : UITableView

@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (copy, nonatomic) id /* block */ maskFrameBlock;
@property (nonatomic) BOOL enableTouchOpt;
@property (weak, nonatomic) id<IESLiveListViewEventDelegate> listViewDelegate;

- (BOOL)ieslive_isTouchInEmptyPlace:(id)a0;
- (void)scrollToBottomWithAnimated:(BOOL)a0;
- (void)scrollToRow:(long long)a0 withAnimated:(BOOL)a1 position:(long long)a2;
- (BOOL)p_indexPathIsValid:(id)a0;
- (void)setTopGradientMask:(id)a0 frameBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)accessibilityScroll:(long long)a0;

@end
