@class NSString, AWEECMallDeliveryTransitionPosition;

@interface AWEECMallDeliveryTransitionInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECMallDeliveryTransitionPosition *position;
@property (nonatomic) unsigned long long transitionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bffDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
