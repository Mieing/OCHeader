@class NSArray, NSDictionary, NSString;

@interface AWEMessageReachDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *scenes;
@property (retain, nonatomic) NSArray *recallScenes;
@property (retain, nonatomic) NSDictionary *delayRequestBubbleData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scenesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
