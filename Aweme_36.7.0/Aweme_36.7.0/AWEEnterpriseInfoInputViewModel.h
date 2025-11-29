@class NSString, NSDictionary, NSArray, AWEEnterpriseCustomerServiceModule;

@interface AWEEnterpriseInfoInputViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel

@property (retain, nonatomic) NSDictionary *collectedInfos;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL isRegistered;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSArray *originModules;
@property (retain, nonatomic) AWEEnterpriseCustomerServiceModule *feData;
@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *cardID;

- (void)configDataWithContent:(id)a0 ext:(id)a1 localExt:(id)a2;
- (void)updateWithExt:(id)a0;
- (void)updateWithModel:(id)a0 ext:(id)a1;
- (void)transferToFEPage;
- (void)p_refreshCardHeightWithExt:(id)a0;
- (void)p_updateWithExt:(id)a0;
- (void).cxx_destruct;

@end
