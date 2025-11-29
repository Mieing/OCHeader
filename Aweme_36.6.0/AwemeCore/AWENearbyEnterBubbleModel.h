@class NSString;

@interface AWENearbyEnterBubbleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long bubbleType;
@property (nonatomic) long long triggerType;
@property (copy, nonatomic) NSString *bubbleStruct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
