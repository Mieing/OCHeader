@class NSString, AWEUGComposeDataModel;

@interface AWEUGComposeResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *listComposeData;
@property (copy, nonatomic) AWEUGComposeDataModel *pushData;
@property (copy, nonatomic) NSString *composeDataSign;
@property (nonatomic) long long nextQueryInterval;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedComposeDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
