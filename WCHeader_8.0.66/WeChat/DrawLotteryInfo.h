@class NSString, MiniAppInfo;

@interface DrawLotteryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MiniAppInfo *miniAppInfo;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *animationWording;
@property (retain, nonatomic) NSString *animationWordingColor;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *afterAnimationWording;
@property (retain, nonatomic) NSString *afterAnimationWordingColor;

+ (void)initialize;

@end
