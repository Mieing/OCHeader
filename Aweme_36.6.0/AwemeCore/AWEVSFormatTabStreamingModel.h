@class NSString, NSArray, HTSLiveVSWatermark, HTSLiveRoom;
@protocol AWELiveHTSLiveEpisode;

@interface AWEVSFormatTabStreamingModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSArray *darkCover;
@property (retain, nonatomic) NSArray *lightCover;
@property (retain, nonatomic) NSArray *playURLs;
@property (copy, nonatomic) NSString *videoPlayInfo;
@property (copy, nonatomic) NSString *liveStreamData;
@property (copy, nonatomic) NSString *liveSDKKey;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *authorID;
@property (retain, nonatomic) NSArray *coverURLs;
@property (copy, nonatomic) NSString *seasonID;
@property (copy, nonatomic) NSString *seasonTag;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *vsEpisodeType;
@property (copy, nonatomic) NSString *vsEpisodeSubType;
@property (nonatomic) unsigned long long directionType;
@property (retain, nonatomic) HTSLiveVSWatermark *watermark;
@property (nonatomic) BOOL isVSLiveMerge;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) id<AWELiveHTSLiveEpisode> episodeModel;

- (void)configLiveWithRoom:(id)a0 darkCover:(id)a1 lightCover:(id)a2;
- (void)configVideoWithEpisode:(id)a0 darkCover:(id)a1 lightCover:(id)a2;
- (BOOL)isVSVerticalStream;
- (id)vsEpisodeStageString;
- (id)vsPlayStatusString;
- (void).cxx_destruct;

@end
