@class NSString;

@interface WCFinderPaymentBottomViewConfig : NSObject

@property (copy, nonatomic) NSString *priceDescription;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (nonatomic) unsigned long long price;

+ (id)configWithPaidCollectionInfo:(id)a0;

- (void).cxx_destruct;

@end
