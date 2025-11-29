@class NSString, EmotionPrice;

@interface AskForRewardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) EmotionPrice *price;
@property (retain, nonatomic) NSString *openId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterScene;

+ (void)initialize;

@end
