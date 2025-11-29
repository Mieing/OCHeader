@class NSString, NSMutableArray;

@interface FinderMediaAndPlayerQoEInfo : NSObject

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSMutableArray *specsArray;
@property (retain, nonatomic) NSString *fileformat;
@property (nonatomic) int bitrate;
@property (nonatomic) int quality;
@property (nonatomic) float duration;
@property (nonatomic) long long downloadSize;
@property (nonatomic) int preloadDuration;
@property (nonatomic) BOOL adajustUpLevel;
@property (nonatomic) BOOL adajustDownLevel;
@property (nonatomic) long long showLoadingCount;
@property (nonatomic) long long stalledCount;
@property (nonatomic) int recieveMoovDataCost;
@property (nonatomic) int firstVideoFrameRenderedCost;
@property (nonatomic) double totalPlaybackTime;
@property (nonatomic) double playbackTime;
@property (nonatomic) int playDownloadSpeed;
@property (nonatomic) float playablePos;
@property (nonatomic) int loopCount;
@property (nonatomic) BOOL bReadyToPlay;

+ (id)defaultFinderPlayerQoEInfo;

- (void).cxx_destruct;

@end
