@class NSString;

@interface AWEIncentiveCloseGoldPendant : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *prompts;
@property (nonatomic) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
