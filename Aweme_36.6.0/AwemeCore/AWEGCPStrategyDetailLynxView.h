@class NSString, UIView;
@protocol AWEGCPStrategyDetailLynxViewDelegate;

@interface AWEGCPStrategyDetailLynxView : UIView <IESGCPDetailBaseViewDelegate>

@property (nonatomic) BOOL didSetup;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<AWEGCPStrategyDetailLynxViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onStrategyViewExpose;
- (void)onStrategyViewDisExpose;
- (void)setNeedsUpdateViewConstraintsAnimated:(BOOL)a0 needImmediately:(BOOL)a1;
- (void)scrollSubViewToVisibleWithView:(id)a0 animated:(BOOL)a1;
- (id)getDIContextFromUniqueKey:(id)a0;
- (void)setupViewWithNodeData:(id)a0 uniqueKey:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
