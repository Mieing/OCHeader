@class FeedShortInfo, FinderObject;

@interface CollectionFeedInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int isShortInfo;
@property (retain, nonatomic) FeedShortInfo *shortInfo;
@property (retain, nonatomic) FinderObject *object;

+ (void)initialize;

@end
