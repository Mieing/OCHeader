@class FinderTipsShowInfo;

@interface DelayBubble : WXPBGeneratedMessage

@property (retain, nonatomic) FinderTipsShowInfo *showInfo;
@property (nonatomic) unsigned int displayTabType;
@property (nonatomic) unsigned int showSeconds;
@property (nonatomic) unsigned int delayNFeeds;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
