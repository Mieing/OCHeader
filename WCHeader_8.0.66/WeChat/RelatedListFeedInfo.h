@interface RelatedListFeedInfo : WXPBGeneratedMessage

@property (nonatomic) int index;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) BOOL isBackupFeed;
@property (nonatomic) unsigned int loadingCostMs;
@property (nonatomic) unsigned int initialBufferingCostMs;
@property (nonatomic) unsigned int dwellTimeMs;
@property (nonatomic) unsigned int playTimeMs;

+ (void)initialize;

@end
