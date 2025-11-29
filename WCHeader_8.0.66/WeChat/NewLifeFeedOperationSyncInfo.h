@class FinderObjectMonotonicData;

@interface NewLifeFeedOperationSyncInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) FinderObjectMonotonicData *monotonicData;
@property (nonatomic) unsigned int operateType;
@property (nonatomic) unsigned int finderLike;
@property (nonatomic) unsigned int friendFinderLikeCount;

+ (void)initialize;

@end
