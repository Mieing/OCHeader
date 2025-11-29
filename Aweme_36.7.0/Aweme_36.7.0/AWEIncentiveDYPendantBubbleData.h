@class NSString, AWEIncentiveDYPendantBubbleTitleData;

@interface AWEIncentiveDYPendantBubbleData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIncentiveDYPendantBubbleTitleData *bubbleTitle;
@property (retain, nonatomic) AWEIncentiveDYPendantBubbleTitleData *bubbleSubtitle;
@property (nonatomic) long long bubbleShowSeconds;
@property (copy, nonatomic) NSString *bubbleURL;
@property (copy, nonatomic) NSString *extendType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bubbleTitleJSONTransformer;
+ (id)bubbleSubtitleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
