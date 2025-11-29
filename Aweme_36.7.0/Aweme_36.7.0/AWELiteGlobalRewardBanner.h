@class NSString;

@interface AWELiteGlobalRewardBanner : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *showPosition;
@property (nonatomic) long long showTimeSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
