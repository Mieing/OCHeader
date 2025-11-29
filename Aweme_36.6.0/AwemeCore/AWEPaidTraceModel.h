@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEPaidTraceModel : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *parentContentID;
@property (copy, nonatomic) NSString *skuID;
@property (copy, nonatomic) NSString *spuID;
@property (copy, nonatomic) NSString *businessScene;
@property (copy, nonatomic) NSString *paymentType;
@property (copy, nonatomic) NSString *subEnterMethod;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metric;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;

+ (id)indexKeys;

- (id)indexDictionary;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setupWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setup;

@end
