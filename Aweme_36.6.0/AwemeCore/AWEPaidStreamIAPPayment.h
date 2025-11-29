@class NSString, AWEAwemeModel;

@interface AWEPaidStreamIAPPayment : AWEPaidStreamPayment

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;

- (id)initWithModel:(id)a0 enterFrom:(id)a1;
- (void)goToPayForPaidAuthItem:(id)a0 paymentType:(long long)a1 extraParameters:(id)a2;
- (void)goToPayForPaidSchema:(id)a0 authItem:(id)a1 paymentType:(long long)a2 extraParameters:(id)a3;
- (void).cxx_destruct;
- (long long)paymentType;

@end
