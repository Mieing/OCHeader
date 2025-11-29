@class NSString;

@interface MMFinderLiveGenericPaymentItem : NSObject

@property (nonatomic) unsigned long long price;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *additionalDesc;
@property (retain, nonatomic) NSString *payButtonTitle;
@property (nonatomic) unsigned int type;

+ (id)paymentItemWithName:(id)a0 price:(unsigned long long)a1 type:(unsigned int)a2 desc:(id)a3 additionalDesc:(id)a4 payTitle:(id)a5;

- (void).cxx_destruct;

@end
