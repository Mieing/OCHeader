@class NSString, NSDictionary, NSArray;

@interface IESECListKitAPIRequestModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *aiPreloadUrl;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) BOOL useJSONBodyWhenPost;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSArray *clientParamsKeys;
@property (copy, nonatomic) NSArray *storageKeys;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSArray *clientHeadersKeys;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *apiKey;
@property (nonatomic) BOOL isMain;
@property (nonatomic) BOOL preMainProcessEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
