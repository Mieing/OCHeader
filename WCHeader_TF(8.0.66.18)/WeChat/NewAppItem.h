@class AppItem, NSString, NSMutableArray;

@interface NewAppItem : WXPBGeneratedMessage

@property (retain, nonatomic) AppItem *appItem;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) BOOL isSubscribed;
@property (retain, nonatomic) NSMutableArray *label;

+ (void)initialize;

@end
