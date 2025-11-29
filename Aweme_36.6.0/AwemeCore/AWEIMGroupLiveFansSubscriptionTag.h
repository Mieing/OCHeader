@class NSString;

@interface AWEIMGroupLiveFansSubscriptionTag : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagString;
@property (nonatomic) long long priority;
@property (nonatomic) long long expireTimeInMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
