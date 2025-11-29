@class UIImageView, UILabel, BDPUniqueID, UIButton;

@interface BDPAddShortcutGuideView : UIView

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UILabel *labelOfTips;
@property (retain, nonatomic) UILabel *labelOfGameInfos;
@property (retain, nonatomic) UILabel *labelOfAgreement;
@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) UIImageView *addShortcutImage;
@property (copy, nonatomic) id /* block */ exitAction;
@property (copy, nonatomic) id /* block */ addToDesktopAction;
@property (copy, nonatomic) id /* block */ agreementAction;

- (void)clickExitButton;
- (void)clickAgreement;
- (void)clickAgreeButton;
- (void).cxx_destruct;
- (void)prepareLayout;
- (void)setupUI;
- (id)initWithUniqueID:(id)a0;
- (id)createButton;

@end
