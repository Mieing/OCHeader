@class AWEKefuGuideViewModel, NSMutableArray;

@interface AWEKefuGuideView : UIView

@property (retain, nonatomic) AWEKefuGuideViewModel *model;
@property (retain, nonatomic) NSMutableArray *actionViewList;
@property (copy, nonatomic) id /* block */ dismissCallBack;

- (void)dismissWithReason:(id)a0;
- (void)showWithDismissCallBack:(id /* block */)a0;
- (void)p_dismissWithReason:(id)a0 touchPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)p_actionViewDidDismiss:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
