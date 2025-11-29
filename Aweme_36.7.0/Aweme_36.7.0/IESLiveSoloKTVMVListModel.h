@class IESLiveKTVDownloaderV2, NSMutableArray;

@interface IESLiveSoloKTVMVListModel : NSObject

@property (retain, nonatomic) IESLiveKTVDownloaderV2 *downloader;
@property (nonatomic) int count;
@property (nonatomic) int mvOffset;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (retain, nonatomic) NSMutableArray *mvItems;
@property (retain, nonatomic) NSMutableArray *videoItems;

- (void)cleanSelected;
- (void)fetchVideo:(BOOL)a0 index:(int)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
