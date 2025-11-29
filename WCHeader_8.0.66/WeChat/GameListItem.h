@class AppItem, NSString, NSMutableArray;

@interface GameListItem : WXPBGeneratedMessage

@property (retain, nonatomic) AppItem *appItem;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) NSMutableArray *feedItemList;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end
