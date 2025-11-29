@class MegaVideoStartPlayContext, FinderObject;

@interface MegaVideoFeed : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObject *finderObject;
@property (retain, nonatomic) MegaVideoStartPlayContext *startPlayContext;
@property (nonatomic) unsigned int indexOfPageWhichContainsFeed;

+ (void)initialize;

@end
