@class AWESearchAdEasterEggModel;

@interface AWENewScanImpl.ScanMaterialResponseModel : AWEBaseApiModel

@property (nonatomic, retain) AWESearchAdEasterEggModel *easterEggModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)easterEggModelJSONTransformer;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
