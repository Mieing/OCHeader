@class NSArray, NSString;

@interface IESECWinHeaderBubbleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *bubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)bubbleJSONTransformer;

- (void).cxx_destruct;

@end
