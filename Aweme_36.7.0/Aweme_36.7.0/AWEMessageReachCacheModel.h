@class NSString;

@interface AWEMessageReachCacheModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double expire;
@property (nonatomic) double expireTimestamp;
@property (nonatomic) long long downgrade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
