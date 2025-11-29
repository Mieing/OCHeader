@class AWEUserModel, NSString, UILabel, UIView, UIButton;

@interface AWEProfileMenuHorizontalHeader : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *entryBtn;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *replicateIconView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *editRemarkButton;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL showEditAlias;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)__setupUI;
- (void)__configText;
- (BOOL)__canCopyIdStr;
- (id)__idStr;
- (void)__replicateStringIntoPasteBoardWithString:(id)a0;
- (void)__entryBtnClicked;
- (void)__idStringTapped;
- (void)__replicateIconTapped;
- (void)editRemarkButtonClicked;
- (void)configWithUser:(id)a0 showEditAlias:(BOOL)a1 enterFrom:(id)a2 previousPage:(id)a3 dismissBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (void)cancelButtonTapped;

@end
