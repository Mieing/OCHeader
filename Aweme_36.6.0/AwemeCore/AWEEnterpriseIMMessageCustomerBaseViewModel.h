@class AWEEnterpriseCustomerServiceModel;

@interface AWEEnterpriseIMMessageCustomerBaseViewModel : AWEEnterpriseIMMessageCardBaseViewModel

@property (retain, nonatomic) AWEEnterpriseCustomerServiceModel *originModel;

- (void)configDataWithContent:(id)a0 ext:(id)a1 localExt:(id)a2;
- (void)updateWithExt:(id)a0;
- (void)saveLocalExt:(id)a0 messageId:(id)a1 conversationId:(id)a2;
- (void).cxx_destruct;

@end
