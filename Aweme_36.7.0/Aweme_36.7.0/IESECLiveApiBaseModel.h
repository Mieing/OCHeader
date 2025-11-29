@class NSString, NSNumber;

@interface IESECLiveApiBaseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mergeBaseApiPropertyKey:(id)a0;
+ (id)iesec_jsonArrayStringTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
