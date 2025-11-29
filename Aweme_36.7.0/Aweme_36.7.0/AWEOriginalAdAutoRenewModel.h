@class NSString;

@interface AWEOriginalAdAutoRenewModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hintText;
@property (nonatomic) unsigned long long adType;
@property (nonatomic) long long outFlowBottomBarPriority;
@property (copy, nonatomic) NSString *hintPageUrl;
@property (copy, nonatomic) NSString *hintIconUrl;
@property (copy, nonatomic) NSString *subHintText;
@property (copy, nonatomic) NSString *subHintIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
