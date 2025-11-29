@class NSString;

@interface AWEIMStickOnTopMessageExtraInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *serverMessageId;
@property (nonatomic) long long sortTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
