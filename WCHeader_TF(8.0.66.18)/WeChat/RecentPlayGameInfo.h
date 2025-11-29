@class AppItem, NSString, NSMutableArray;

@interface RecentPlayGameInfo : WXPBGeneratedMessage

@property (retain, nonatomic) AppItem *appItem;
@property (retain, nonatomic) NSString *appUserDesc;
@property (retain, nonatomic) NSMutableArray *subList;

+ (void)initialize;

@end
