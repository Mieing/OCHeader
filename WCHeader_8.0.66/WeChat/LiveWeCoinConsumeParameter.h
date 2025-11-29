@class FlutterStandardTypedData, NSString, LiveWeCoinConsumeModeBox, NSArray, NSNumber;

@interface LiveWeCoinConsumeParameter : NSObject

@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) LiveWeCoinConsumeModeBox *consumeMode;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) FlutterStandardTypedData *prepareWecoinConsumeBuff;
@property (copy, nonatomic) NSString *productTitle;
@property (copy, nonatomic) NSString *productTitleInsufficient;
@property (retain, nonatomic) NSNumber *productWecoinPrice;
@property (copy, nonatomic) NSString *productWecoinRealPrice;
@property (copy, nonatomic) NSArray *consumeTipsWording;
@property (copy, nonatomic) NSString *consumeButtonTitle;
@property (copy, nonatomic) NSString *consumeButtonTitleInsufficient;
@property (retain, nonatomic) NSNumber *agreementSelected;
@property (copy, nonatomic) NSString *agreementString;

+ (id)makeWithBusinessId:(id)a0 consumeMode:(id)a1 sessionId:(id)a2 prepareWecoinConsumeBuff:(id)a3 productTitle:(id)a4 productTitleInsufficient:(id)a5 productWecoinPrice:(id)a6 productWecoinRealPrice:(id)a7 consumeTipsWording:(id)a8 consumeButtonTitle:(id)a9 consumeButtonTitleInsufficient:(id)a10 agreementSelected:(id)a11 agreementString:(id)a12;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
