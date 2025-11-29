@class NSArray, NSString;

@interface IESLiveEmojiConfiguration : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *interactEmojis;
@property (nonatomic) long long durationMs;
@property (nonatomic) long long start;
@property (nonatomic) long long timeOffset;
@property (nonatomic) long long offset;
@property (nonatomic) long long offsetStart;
@property (nonatomic) BOOL noRotation;
@property (nonatomic) long long scaleUp;
@property (nonatomic) BOOL reshape;
@property (nonatomic) long long reshapeStart;
@property (retain, nonatomic) NSString *soundURL;
@property (nonatomic) long long x;
@property (nonatomic) long long y;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactEmojisJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
