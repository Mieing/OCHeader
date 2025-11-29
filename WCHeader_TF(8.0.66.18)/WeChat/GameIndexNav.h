@class GameIndexNav_IndexNavItem, GameIndexNav_SearchModule;

@interface GameIndexNav : WXPBGeneratedMessage

@property (retain, nonatomic) GameIndexNav_IndexNavItem *myProfile;
@property (retain, nonatomic) GameIndexNav_IndexNavItem *myMessage;
@property (retain, nonatomic) GameIndexNav_IndexNavItem *myActivities;
@property (retain, nonatomic) GameIndexNav_SearchModule *search;

+ (void)initialize;

@end
