@class NSString;

@interface GameRankSwitchInfo_GameRankSwitch : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *gameAppId;
@property (retain, nonatomic) NSString *gameAppName;
@property (nonatomic) unsigned int isEnable;
@property (nonatomic) unsigned int orderNum;

+ (void)initialize;

- (void)setOrderNum:(unsigned int)a0;
- (unsigned int)orderNum;
- (void)setIsEnable:(unsigned int)a0;
- (unsigned int)isEnable;
- (void)setGameAppName:(id)a0;
- (id)gameAppName;
- (void)setGameAppId:(id)a0;
- (id)gameAppId;

@end
