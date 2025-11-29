@class NSString;

@interface AWEECMallDeliveryTransitionPosition : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sectionId;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *elementName;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
