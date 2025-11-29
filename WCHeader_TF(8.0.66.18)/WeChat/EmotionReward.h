@class NSString;

@interface EmotionReward : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *begWord;
@property (retain, nonatomic) NSString *begPicUrl;
@property (retain, nonatomic) NSString *thanksPicUrl;
@property (retain, nonatomic) NSString *magicUrl;
@property (retain, nonatomic) NSString *magicWord;
@property (nonatomic) unsigned int magicExpire;
@property (nonatomic) unsigned int magicLimit;
@property (retain, nonatomic) NSString *magicMd5;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

@end
