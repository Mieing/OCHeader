@class NSString;

@interface AWEAIGCAIAssetRecord : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *recordId;
@property (nonatomic) long long amount;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
