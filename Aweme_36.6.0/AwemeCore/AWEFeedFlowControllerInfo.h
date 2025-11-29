@class NSString, NSDictionary;

@interface AWEFeedFlowControllerInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showFlow;
@property (copy, nonatomic) NSString *flowButtonIconURL;
@property (copy, nonatomic) NSString *flowButtonExtra;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flowControllerInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
