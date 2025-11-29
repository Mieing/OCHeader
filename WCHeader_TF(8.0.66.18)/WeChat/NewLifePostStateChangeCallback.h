@class NSString, FinderObject;

@interface NewLifePostStateChangeCallback : WXPBGeneratedMessage

@property (nonatomic) unsigned int postState;
@property (retain, nonatomic) NSString *localFeedId;
@property (retain, nonatomic) NSString *serverFeedId;
@property (nonatomic) double progress;
@property (retain, nonatomic) FinderObject *serverFeed;
@property (retain, nonatomic) FinderObject *localFeed;

+ (void)initialize;

@end
