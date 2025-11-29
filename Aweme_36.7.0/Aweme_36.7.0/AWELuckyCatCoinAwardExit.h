@class NSDictionary, AWELuckyCatBubbleInfo, NSString;

@interface AWELuckyCatCoinAwardExit : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long coinFoldStatus;
@property (nonatomic) long long coinCountStopStatus;
@property (nonatomic) long long luckyBagStatus;
@property (copy, nonatomic) NSDictionary *extraTaskPageJumpLink;
@property (retain, nonatomic) AWELuckyCatBubbleInfo *coinBubbleInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coinBubbleInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
