@class NSString, AWELuckyCatFeedTaskCardBubbleInfo;

@interface AWELuckyCatFeedTaskCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *cardData;
@property (nonatomic) BOOL showInspire;
@property (nonatomic) BOOL enableDislike;
@property (retain, nonatomic) AWELuckyCatFeedTaskCardBubbleInfo *bubbleInfo;
@property (nonatomic) double validStartTime;
@property (nonatomic) double validEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bubbleInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
