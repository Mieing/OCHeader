@class NSString, NSMutableDictionary, NSDictionary;

@interface IESECBuyNowSchemaBuilder : IESECBaseSchemaBuilder

@property (retain, nonatomic) NSMutableDictionary *entranceInfo;
@property (copy, nonatomic) NSString *schemaPath;
@property (copy, nonatomic) NSString *schemeHost;
@property (nonatomic) BOOL isNative;
@property (nonatomic) BOOL buildCompleted;
@property (copy, nonatomic) NSDictionary *originQueryItems;

+ (BOOL)isNativeBuy:(id)a0;
+ (BOOL)isUltimateBuy:(id)a0;

- (id)initWithBuyNowSchema:(id)a0;
- (void)appendToEntranceInfo:(id)a0;
- (void)appendPassthrough:(id)a0 to:(id)a1 option:(unsigned long long)a2;
- (void)p_getEntranceInfo;
- (void)p_setEntranceInfo;
- (void)transToMegaID;
- (void)downloadPassthrough:(id)a0 to:(id)a1 option:(unsigned long long)a2;
- (void)appendToMegaObject:(id)a0;
- (id)originSchemaQueryItems;
- (void).cxx_destruct;
- (id)build;

@end
