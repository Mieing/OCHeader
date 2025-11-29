@class AWEAwemeModel;

@interface AWEPaidStreamVIPPayment : AWEPaidStreamPayment

@property (retain, nonatomic) AWEAwemeModel *model;

- (void)goToPayForPaidSchema:(id)a0 authItem:(id)a1 paymentType:(long long)a2 extraParameters:(id)a3;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (long long)paymentType;

@end
