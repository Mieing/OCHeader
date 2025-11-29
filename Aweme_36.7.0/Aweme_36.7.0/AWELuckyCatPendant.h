@class NSString, NSDictionary, AWELuckyCatPendantArea, AWELuckyCatPendantBubble, NSArray, AWELuckyCatPendantProgressCircle;

@interface AWELuckyCatPendant : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long enableNormalize;
@property (retain, nonatomic) AWELuckyCatPendantArea *pendantMidArea;
@property (retain, nonatomic) AWELuckyCatPendantArea *pendantRightArea;
@property (retain, nonatomic) AWELuckyCatPendantArea *pendantTopArea;
@property (retain, nonatomic) AWELuckyCatPendantArea *pendantBottomArea;
@property (retain, nonatomic) AWELuckyCatPendantBubble *pendantBubbleArea;
@property (retain, nonatomic) AWELuckyCatPendantProgressCircle *progressCircle;
@property (nonatomic) unsigned long long pendantStyle;
@property (nonatomic) unsigned long long isShow;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) NSArray *feedVVConfigArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)feedVVConfigArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
