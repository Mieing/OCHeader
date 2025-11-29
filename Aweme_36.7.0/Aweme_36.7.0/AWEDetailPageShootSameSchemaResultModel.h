@class NSString, NSNumber;

@interface AWEDetailPageShootSameSchemaResultModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shootSameSchema;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
