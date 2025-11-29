@class HTSEventContext, NSString;

@interface IESLiveChorusAlertView : UIView

@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (weak, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) int permissionType;
@property (copy, nonatomic) NSString *reason;

- (void)p_trackShow;
- (id)popUpType;
- (void)p_trackClick:(BOOL)a0;
- (void)tapCancel;
- (void)showWithTitle:(id)a0 description:(id)a1 actionTitle:(id)a2 actionBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (void)tapAction;

@end
