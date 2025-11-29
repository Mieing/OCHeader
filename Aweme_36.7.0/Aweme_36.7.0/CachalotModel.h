@class NSNumber, NSArray, NSString, XFeedStructModel, XFeedGlobalUIModel, XFeedExtraModel;

@interface CachalotModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *businessData;
@property (retain, nonatomic) NSArray *renderInfo;
@property (retain, nonatomic) XFeedStructModel *structData;
@property (retain, nonatomic) XFeedGlobalUIModel *globalUI;
@property (retain, nonatomic) XFeedExtraModel *extra;
@property (nonatomic) unsigned long long containerType;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)structJSONTransformer;
+ (id)globalUIJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
