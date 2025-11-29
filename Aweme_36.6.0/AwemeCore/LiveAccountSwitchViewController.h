@class NSString, LiveAccountSwitchButton, UILabel, LiveAccountSwitchModel, UIButton;

@interface LiveAccountSwitchViewController : UIViewController

@property (retain, nonatomic) NSString *otherUID;
@property (retain, nonatomic) NSString *currentUID;
@property (retain, nonatomic) LiveAccountSwitchModel *model;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) LiveAccountSwitchButton *currentUserButton;
@property (retain, nonatomic) LiveAccountSwitchButton *otherButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)acceptAction;
- (id)initWithModel:(id)a0 isAnchor:(BOOL)a1;
- (void)tapCurrentUserButton;
- (void)tapOtherButton;
- (id)sec_uid2uid:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dismissAction;

@end
