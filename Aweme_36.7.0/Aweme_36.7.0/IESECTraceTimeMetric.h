@class NSString;

@interface IESECTraceTimeMetric : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long opTimestamp;
@property (nonatomic) long long producerDuration;
@property (nonatomic) long long consumerDuration;
@property (nonatomic) long long msgSendTimestamp;
@property (nonatomic) long long clientRecvTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
