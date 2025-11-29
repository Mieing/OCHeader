@class AWEEnterpriseCompanyMenuConfiguration, NSString, AWEIMCompanyMenuView;

@interface AWEEnterpriseCompanyMenuFeature : AWEFeature <IESIMEnterpriseCompanyMenuProtocol>

@property (retain, nonatomic) AWEIMCompanyMenuView *companyView;
@property (retain, nonatomic) AWEEnterpriseCompanyMenuConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aliasName;

- (void)hideSubMenu;
- (void)hideSwitchKeyboradButton:(BOOL)a0;
- (void)adjustSwitchKeyboardButtonWidth:(double)a0 leftMargin:(double)a1;
- (void)fetchMenuWithConversationID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)featureType;
- (id)view;

@end
