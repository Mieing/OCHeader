@class NSString, AWEMusicChartMusicModel, NSMutableSet, NSMutableArray;

@interface AWEMusicChartModel : NSObject

@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEMusicChartMusicModel *music;
@property (retain, nonatomic) NSMutableArray *awemeList;
@property (retain, nonatomic) NSMutableSet *awemeIdSet;
@property (copy, nonatomic) NSString *startCursor;
@property (nonatomic) long long lastAwemeIndex;

- (void).cxx_destruct;

@end
