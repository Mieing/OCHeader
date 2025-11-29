@class NSString;

@interface AWEIMMixPhotoChallengeInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *challengeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
