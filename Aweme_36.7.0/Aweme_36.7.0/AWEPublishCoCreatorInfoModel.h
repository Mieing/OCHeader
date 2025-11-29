@class NSArray, AWECoCreatorSerachExtraModel, NSString;

@interface AWEPublishCoCreatorInfoModel : AWEBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *cocreatorInfos;
@property (retain, nonatomic) AWECoCreatorSerachExtraModel *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cocreatorInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
