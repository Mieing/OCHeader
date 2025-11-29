@class BDPCloseButton, NSString, BDPCheckBox, UILabel, UIView, BDPUniqueID, UIButton;

@interface BDPRevisitEducationView : UIView <BDPCustomExitPopupRevisitEducationViewsProtocol>

@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UIButton *knownButton;
@property (retain, nonatomic) BDPCloseButton *closeButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ exitAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCloseButton;
- (void)setupAction;
- (void)clickExitButton;
- (void)setupUIWithHasOption:(BOOL)a0;
- (double)getContentViewHeight:(BOOL)a0;
- (void)setupContentViewShape:(id)a0;
- (void)checkTheOption;
- (id)initWithUniqueID:(id)a0 desc:(id)a1 title:(id)a2 imageURL:(id)a3 hasOption:(BOOL)a4;
- (void).cxx_destruct;

@end
