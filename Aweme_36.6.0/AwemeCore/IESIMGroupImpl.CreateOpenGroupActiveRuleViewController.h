@interface IESIMGroupImpl.CreateOpenGroupActiveRuleViewController : UIViewController {
    void /* unknown type, empty encoding */ activeFilterPopupModel;
    void /* unknown type, empty encoding */ transferToCreatePageCallBack;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subTitleLabel;
    void /* unknown type, empty encoding */ actionRuleGroupMemberContainer;
    void /* unknown type, empty encoding */ actionRuleGroupMemberTitleLabel;
    void /* unknown type, empty encoding */ actionRuleGroupMemberIconView;
    void /* unknown type, empty encoding */ actionRuleVisitRateContainer;
    void /* unknown type, empty encoding */ actionRuleVisitRateTitleLabel;
    void /* unknown type, empty encoding */ actionRuleVisitRateIconView;
    void /* unknown type, empty encoding */ exemptionCheckBox;
    void /* unknown type, empty encoding */ exemptionDescLabel;
    void /* unknown type, empty encoding */ exemptionContainer;
    void /* unknown type, empty encoding */ checkActiveGroupButton;
    void /* unknown type, empty encoding */ createButton;
}

- (void)createGroup;
- (void)clickCheckActiveGroup;
- (void)clickKnownButton;
- (void)updateIconImage;
- (void)exemptionCheckBoxCheckedDidChanged;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)loadView;

@end
