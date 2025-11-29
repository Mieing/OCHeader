@class NSString;

@interface AWEMallBubbleComponentInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rType;
@property (copy, nonatomic) NSString *componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
