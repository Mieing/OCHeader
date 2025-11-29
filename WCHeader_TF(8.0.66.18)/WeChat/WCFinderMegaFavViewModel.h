@class NSData, NSMutableArray;

@interface WCFinderMegaFavViewModel : NSObject

@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL hadMore;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long finderTotalCount;
@property (nonatomic) unsigned long long megavideoTotalCount;
@property (retain, nonatomic) NSMutableArray *datas;

- (id)init;
- (void)clearAllData;
- (id)fetchNextMegaVideos;
- (id)historyVideos;
- (void).cxx_destruct;

@end
