@class NSArray, NSString;

@interface BCMCheckParamsListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *paramList;
@property (copy, nonatomic) NSString *versionInfo;
@property (copy, nonatomic) NSArray *ignoreCheckBtmList;
@property (copy, nonatomic) NSArray *ignoreCheckBcmTypeParamsList;
@property (copy, nonatomic) NSArray *shouldCheckBcmParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
