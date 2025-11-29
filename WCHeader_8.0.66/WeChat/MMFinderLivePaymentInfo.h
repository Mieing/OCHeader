@class WCFinderContact, FinderLiveContact;

@interface MMFinderLivePaymentInfo : NSObject

@property (retain, nonatomic) FinderLiveContact *liveContact;
@property (retain, nonatomic) WCFinderContact *refContact;
@property (nonatomic) unsigned long long paidTime;
@property (nonatomic) unsigned int paidAmountInWecoin;

+ (id)convertFromGainsInfoList:(id)a0;

- (id)initWithPaymentGainsInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
