@class NSArray, NSString;

@interface IESECLiveReplayMessageContentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long interactionType;
@property (retain, nonatomic) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
