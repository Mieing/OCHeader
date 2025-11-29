@class NSString, NSData, NSArray;
@protocol MMPageSheetProvider;

@interface WCCoinConsumeParameter : MMObject

@property (nonatomic) unsigned long long mode;
@property (nonatomic) int businessId;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *consumeProductId;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSData *extReq;
@property (retain, nonatomic) NSData *buff;
@property (weak, nonatomic) id<MMPageSheetProvider> pageSheetProvider;
@property (retain, nonatomic) NSString *productTitle;
@property (retain, nonatomic) NSString *productTitleInsufficient;
@property (nonatomic) unsigned int productWecoinPrice;
@property (retain, nonatomic) NSArray *consumeTipsWording;
@property (retain, nonatomic) NSString *consumeButtonTitle;
@property (retain, nonatomic) NSString *consumeButtonTitleInsufficient;
@property (nonatomic) BOOL agreementSelected;
@property (retain, nonatomic) NSString *agreementString;
@property (retain, nonatomic) NSString *consumeLoadingString;
@property (retain, nonatomic) NSString *showPanelLoadingString;

- (id)init;
- (void).cxx_destruct;

@end
