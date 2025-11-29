@class NSMutableArray;

@interface MMFinderLiveKTVDemoSyncInfo : NSObject

@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *requestedSongItems;
@property (nonatomic) unsigned long long syncId;

- (void).cxx_destruct;

@end
