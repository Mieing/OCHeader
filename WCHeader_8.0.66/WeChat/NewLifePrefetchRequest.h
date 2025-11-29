@class FinderObjectEventDesc, FinderObject, FinderTopicHashTagDesc;

@interface NewLifePrefetchRequest : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) int scene;
@property (retain, nonatomic) FinderObject *object;
@property (retain, nonatomic) FinderTopicHashTagDesc *hashTagDesc;
@property (retain, nonatomic) FinderObjectEventDesc *eventDesc;

+ (void)initialize;

@end
