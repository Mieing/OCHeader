@class NSNumber, YataProtocolModel, NSString;

@interface YataNetResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) YataProtocolModel *protocolModel;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *successToast;
@property (copy, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
