@class NSMutableArray, NSArray, NSString, NSDictionary, NSMutableDictionary, BDSimPlayerItem, NSNumber;
@protocol BDSimVideoBSModel, BDSimAudioBSModel;

@interface BDSimPlayerLogEventInternal : NSObject <BDSimPlayerLogEvent>

@property (retain, nonatomic) BDSimPlayerItem *playItem;
@property (retain, nonatomic) id<BDSimVideoBSModel> preloadedBSModel;
@property (retain, nonatomic) id<BDSimAudioBSModel> preloadedAudioBSModel;
@property (retain, nonatomic) id<BDSimVideoBSModel> playBSModel;
@property (retain, nonatomic) NSArray *urlArray;
@property (retain, nonatomic) NSString *urlKey;
@property (retain, nonatomic) NSString *fileCs;
@property (retain, nonatomic) NSNumber *calcBitrate;
@property (retain, nonatomic) id<BDSimVideoBSModel> bsModel;
@property (retain, nonatomic) id<BDSimVideoBSModel> manualBSModel;
@property (nonatomic) BOOL isPreBSVideo;
@property (copy, nonatomic) NSString *bitrateCurve;
@property (copy, nonatomic) NSDictionary *bitrateFliterInfo;
@property (copy, nonatomic) NSDictionary *sr1080FliterInfo;
@property (retain, nonatomic) NSMutableArray *dimensionBitrateFilter;
@property (retain, nonatomic) NSMutableArray *clientBitrateSet;
@property (copy, nonatomic) NSString *currentPlayingURLKey;
@property (retain, nonatomic) NSMutableDictionary *dashInfo;
@property (retain, nonatomic) NSArray *playURLs;
@property (nonatomic) long long trategyType;
@property (nonatomic) unsigned long long memoryGearType;
@property (nonatomic) BOOL isCDNURLExpired;
@property (nonatomic) int projectionModelType;
@property (retain, nonatomic) NSNumber *awe_playByteVC1;
@property (copy, nonatomic) NSString *meta;
@property (copy, nonatomic) NSDictionary *metaInDicForm;
@property (copy, nonatomic) NSString *strategyTokens;
@property (nonatomic) long long isSourceHDR;
@property (nonatomic) BOOL hasFilterHDR;
@property (nonatomic) BOOL enableHDR;
@property (retain, nonatomic) NSString *HDRVideoMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;

@end
