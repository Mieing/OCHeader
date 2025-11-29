@class NSString, NSDictionary;

@interface IESLiveAioLinkFullLinkMeta : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *step;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (retain, nonatomic) NSDictionary *index;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
