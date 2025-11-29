@class DVEVCContext, UIViewController, NSString;

@interface DVEBaseView : UIView <DVECoreActionDelegate>

@property (weak, nonatomic) DVEVCContext *vcContext;
@property (weak, nonatomic) UIViewController *parentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)undoRedoWillClikeByUser;
- (void)undoRedoClikedByUser;
- (void)touchOutSide;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
