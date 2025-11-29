@class FinderContact, FinderObject;

@interface FinderStreamOftenReadBar_OftenReadItem : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned long long lastestUnreadTime;
@property (retain, nonatomic) FinderObject *liveObject;

+ (void)initialize;

@end
