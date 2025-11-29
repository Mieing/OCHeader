@class GameIndexGameBlockContent, NSString, AppItem, GameIndexGameBlockEntrance;

@interface GameIndexGameBlock : WXPBGeneratedMessage

@property (retain, nonatomic) AppItem *appItem;
@property (retain, nonatomic) GameIndexGameBlockEntrance *entrance;
@property (retain, nonatomic) GameIndexGameBlockContent *content;
@property (retain, nonatomic) NSString *desc;

+ (void)initialize;

@end
