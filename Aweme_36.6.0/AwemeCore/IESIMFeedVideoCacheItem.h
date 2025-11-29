@class AWEAwemeModel;

@interface IESIMFeedVideoCacheItem : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemModel;
@property (nonatomic) double awemeUpdateTimestamp;
@property (nonatomic) unsigned long long fromAPI;

+ (long long)awemeExpiredInterval;

- (BOOL)isValidFeed;
- (void).cxx_destruct;

@end
