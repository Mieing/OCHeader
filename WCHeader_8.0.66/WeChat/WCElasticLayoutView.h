@class UIView;
@protocol WCElasticLayoutViewDelegate;

@interface WCElasticLayoutView : UIView

@property (retain, nonatomic) UIView *anchorView;
@property (retain, nonatomic) UIView *followView;
@property (nonatomic) BOOL isExpanded;
@property (weak, nonatomic) id<WCElasticLayoutViewDelegate> delegate;
@property (nonatomic) BOOL shrinkable;
@property (nonatomic) BOOL expandable;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shrinkBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandBounds;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getContainerFrameForAnchorView:(id)a0 andFollowView:(id)a1;

- (id)initWithAnchorView:(id)a0 followView:(id)a1;
- (void)updateShrinkBoundsByCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)updateExpandBoundsByCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)shrinkAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)expandAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_shrinkAndHideFollowView;
- (void)_expandAndShowFollowView;
- (void).cxx_destruct;

@end
