@class AWEGeneralSearchUGCBusinessModel, NSMutableArray, NSArray;

@interface AWEGeneralSearchCardTagArrayModel : AWEBaseApiModel

@property (retain, nonatomic) NSMutableArray *cardTagArray;
@property (retain, nonatomic) AWEGeneralSearchUGCBusinessModel *ugcBusinessModel;
@property (copy, nonatomic) NSArray *hotspotTabConfig;
@property (copy, nonatomic) NSArray *commonTabConfig;

+ (id)ugcBusinessModelJSONTransformer;
+ (id)cardTagArrayJSONTransformer;
+ (id)hotspotTabConfigJSONTransformer;
+ (id)commonTabConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)getTabConfigType;
- (void).cxx_destruct;

@end
