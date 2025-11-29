@class NSString;

@interface AWEVideoPublishChallengeInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *challengeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
