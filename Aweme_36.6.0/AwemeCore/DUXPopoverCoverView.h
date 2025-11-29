@class NSArray, NSString, UIView;
@protocol DUXPopoverCoverViewDelegate;

@interface DUXPopoverCoverView : UIView <IESIMPopoverCoverViewProtocol>

@property (nonatomic) BOOL canPenetrate;
@property (copy, nonatomic) NSArray *canPenetrateViewArray;
@property (weak, nonatomic) UIView *triggerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DUXPopoverCoverViewDelegate> delegate;
@property (nonatomic) BOOL canPenetrate;
@property (copy, nonatomic) NSArray *canPenetrateViewArray;
@property (weak, nonatomic) UIView *triggerView;

- (void)setHollowView:(id)a0;
- (BOOL)canPenetrateInViewArrayWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
