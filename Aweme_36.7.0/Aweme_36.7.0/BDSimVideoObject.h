@class NSArray, NSString, NSDictionary, NSMutableDictionary, NSNumber, NSMutableArray;
@protocol BDSimURLModel, BDSimAudioBSModel, BDSimAudioModel, BDSimVideoMetaModel, BDSimVideoBSModel;

@interface BDSimVideoObject : NSObject <BDSimVideoModel, BDSimBitrateSelectorResult>

@property (nonatomic) BOOL isCDNURLExpired;
@property (retain, nonatomic) id<BDSimURLModel> playURL;
@property (readonly, nonatomic) id<BDSimURLModel> playLowBitURL;
@property (readonly, nonatomic) id<BDSimURLModel> h264URL;
@property (readonly, nonatomic) id<BDSimURLModel> downloadURL;
@property (copy, nonatomic) NSArray *bitrateModels;
@property (copy, nonatomic) NSArray *bitrateModels_origin;
@property (readonly, copy, nonatomic) NSArray *bitrateRawData;
@property (copy, nonatomic) NSArray *audioBSModels;
@property (copy, nonatomic) NSArray *audioBitrateModels;
@property (copy, nonatomic) NSString *dashJsonVideoModel;
@property (retain, nonatomic) NSDictionary *dashDicVideoModel;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSArray *manualBitrateModels;
@property (nonatomic) unsigned long long manualGearType;
@property (nonatomic) unsigned long long switchableGearsType;
@property (readonly, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *isH265;
@property (nonatomic) long long cdnURLExpiredTime;
@property (nonatomic) BOOL needSetToken;
@property (copy, nonatomic) NSString *dashVideoModel;
@property (readonly, nonatomic) NSNumber *realDuration;
@property (readonly, nonatomic) NSNumber *lVideoRealDuration;
@property (readonly, nonatomic) NSNumber *lVideoRealDurationMin;
@property (copy, nonatomic) id<BDSimVideoMetaModel> videoMeta;
@property (copy, nonatomic) NSString *currentPlayingURLKey;
@property (retain, nonatomic) id<BDSimVideoBSModel> preloadedBSModel;
@property (retain, nonatomic) id<BDSimAudioBSModel> preloadedAudioBSModel;
@property (retain, nonatomic) NSMutableDictionary *dashInfo;
@property (nonatomic) BOOL isPreBSVideo;
@property (copy, nonatomic) NSString *bitrateCurve;
@property (copy, nonatomic) NSDictionary *bitrateFliterInfo;
@property (copy, nonatomic) NSDictionary *sr1080FliterInfo;
@property (retain, nonatomic) NSNumber *awe_playByteVC1;
@property (retain, nonatomic) id<BDSimVideoBSModel> playBSModel;
@property (copy, nonatomic) NSString *meta;
@property (copy, nonatomic) NSDictionary *metaInDicForm;
@property (copy, nonatomic) NSString *strategyTokens;
@property (nonatomic) long long isSourceHDR;
@property (nonatomic) BOOL hasFilterHDR;
@property (copy, nonatomic) id /* block */ CDNURLExpiredHanlder;
@property (retain, nonatomic) id<BDSimAudioModel> audioModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *dimensionBitrateFilter;
@property (retain, nonatomic) NSMutableArray *clientBitrateSet;

- (void)setRealDuration:(id)a0;
- (id)switchableGears;
- (void)setLongVideoRealDuration:(id)a0;
- (void).cxx_destruct;
- (void)setDuration:(id)a0;

@end
