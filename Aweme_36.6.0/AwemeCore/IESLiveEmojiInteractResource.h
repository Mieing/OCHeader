@class NSString, IESLiveEmojiConfiguration;

@interface IESLiveEmojiInteractResource : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveEmojiConfiguration *fromImage;
@property (retain, nonatomic) IESLiveEmojiConfiguration *passImage;
@property (retain, nonatomic) IESLiveEmojiConfiguration *toImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromImageJSONTransformer;
+ (id)passImageJSONTransformer;
+ (id)toImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
