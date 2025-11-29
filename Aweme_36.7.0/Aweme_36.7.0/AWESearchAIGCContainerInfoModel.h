@class AWESearchAIGCStructModel, NSArray, NSDictionary, NSString, NSNumber;

@interface AWESearchAIGCContainerInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *businessData;
@property (copy, nonatomic) NSArray *renderInfo;
@property (retain, nonatomic) AWESearchAIGCStructModel *structData;
@property (copy, nonatomic) NSDictionary *logDict;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSDictionary *businessExtra;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)structDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
