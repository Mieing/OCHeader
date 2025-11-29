@class NSString;

@interface WCPayOverseaGetFacingReceiveQRCodeResponse : NSObject <PBCoding>

@property (retain, nonatomic) NSString *nsQRCodeUrl;
@property (nonatomic) unsigned int uiIsSetAmount;
@property (retain, nonatomic) NSString *nsRealname;
@property (nonatomic) int alertType;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) NSString *leftButtonText;
@property (retain, nonatomic) NSString *rightButtonText;
@property (retain, nonatomic) NSString *rightButtonUrl;
@property (retain, nonatomic) NSString *bottomText;
@property (retain, nonatomic) NSString *bottomUrl;
@property (nonatomic) int currencyType;
@property (copy, nonatomic) NSString *currencyUint;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *noticeUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsQRCodeUrl;
+ (void)PBArrayAdd_currencyType;
+ (void)PBArrayAdd_currencyUint;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
