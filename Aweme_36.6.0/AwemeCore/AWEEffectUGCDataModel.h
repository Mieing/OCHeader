@class NSString, AWEEffectUGCDataFileUrlModel, NSDictionary;

@interface AWEEffectUGCDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ugcId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *effectId;
@property (retain, nonatomic) AWEEffectUGCDataFileUrlModel *fileUrl;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
