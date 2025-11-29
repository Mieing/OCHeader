@class NSArray, NSString, NSDictionary, NSNumber;

@interface AWEEffectUGCListResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSArray *ugcData;
@property (retain, nonatomic) NSArray *urlPrefix;
@property (copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ugcDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
