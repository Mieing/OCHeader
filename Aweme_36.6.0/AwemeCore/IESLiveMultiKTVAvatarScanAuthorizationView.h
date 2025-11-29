@interface IESLiveMultiKTVAvatarScanAuthorizationView : UIView

@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ privacyAction;

- (void)p_confirm;
- (id)initWithContent:(id)a0 confirmTitle:(id)a1 confirmAction:(id /* block */)a2 privacyAction:(id /* block */)a3 diContext:(id)a4;
- (void)p_tapPrivacy;
- (void).cxx_destruct;

@end
