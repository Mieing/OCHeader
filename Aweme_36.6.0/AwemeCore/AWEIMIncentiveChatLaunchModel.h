@class NSDictionary, NSString;

@interface AWEIMIncentiveChatLaunchModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *incentiveChatInfo;
@property (copy, nonatomic) NSDictionary *incentiveShareInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
