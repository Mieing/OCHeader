@class NSString;

@interface AWEECDeepLinkTabKitPrefetchConfigRule : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long strategy;
@property (copy, nonatomic) NSString *prefetchChannelTag;
@property (copy, nonatomic) NSString *bizTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
