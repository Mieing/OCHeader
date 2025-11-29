@class HomePageTheme, TypeNavModule, GameIndexGameRecomBlock, GameIndexWxagInfo, GameIndexGameBlock, GameIndexMoreGameEntr, BaseResponse;

@interface GetGameIndex4Response : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) GameIndexGameBlock *gameBlock;
@property (retain, nonatomic) GameIndexGameRecomBlock *gameRecom;
@property (retain, nonatomic) GameIndexMoreGameEntr *moreGame;
@property (retain, nonatomic) HomePageTheme *theme;
@property (retain, nonatomic) TypeNavModule *typeNav;
@property (retain, nonatomic) GameIndexWxagInfo *wxagInfo;

+ (void)initialize;

- (void)setWxagInfo:(id)a0;
- (id)wxagInfo;
- (void)setTypeNav:(id)a0;
- (id)typeNav;
- (void)setTheme:(id)a0;
- (id)theme;
- (void)setMoreGame:(id)a0;
- (id)moreGame;
- (void)setGameRecom:(id)a0;
- (id)gameRecom;
- (void)setGameBlock:(id)a0;
- (id)gameBlock;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
