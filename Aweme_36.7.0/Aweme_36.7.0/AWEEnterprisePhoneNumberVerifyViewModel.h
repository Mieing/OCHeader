@class NSString, AWEEnterprisePhoneNumberVerifyModel;

@interface AWEEnterprisePhoneNumberVerifyViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel

@property (retain, nonatomic) AWEEnterprisePhoneNumberVerifyModel *model;
@property (copy, nonatomic) NSString *currentPhoneNumber;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

- (void)configDataWithContent:(id)a0 ext:(id)a1 localExt:(id)a2;
- (void)updateWithExt:(id)a0;
- (void)updateWithModel:(id)a0 localExt:(id)a1 syncExt:(id)a2;
- (void)p_updateWithExt:(id)a0;
- (void)getPhoneNumberWithCompleteBlock:(id /* block */)a0;
- (void)getVerifyCodeWithPhone:(id)a0 messageInfo:(id)a1 completeBlock:(id /* block */)a2;
- (void)submitWithPhone:(id)a0 code:(id)a1 messageInfo:(id)a2 completeBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
