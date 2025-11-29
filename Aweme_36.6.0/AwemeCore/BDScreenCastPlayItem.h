@class BDScreenCastPlayInfoModel, NSString, NSArray, BDSCProgressInfo, BDSCDanmakuSetting, BDSCLivePlayInfo, BDSCPlayControlMediaInfoModel, BDSCCoverInfo, NSNumber;

@interface BDScreenCastPlayItem : NSObject

@property (retain, nonatomic) BDScreenCastPlayInfoModel *infoModel;
@property (copy, nonatomic) NSString *lastResolution;
@property (copy, nonatomic) NSString *resolution;
@property (retain, nonatomic) BDSCProgressInfo *progressInfo;
@property (retain, nonatomic) BDSCPlayControlMediaInfoModel *mediaInfo;
@property (copy, nonatomic) id /* block */ airPlayContentGenerator;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long videoType;
@property (retain, nonatomic) BDSCLivePlayInfo *livePlayInfo;
@property (nonatomic) unsigned long long playVideoType;
@property (retain, nonatomic) BDSCDanmakuSetting *danmakuSetting;
@property (nonatomic) unsigned long long supportRedirectType;
@property (nonatomic) BOOL keepPlayList;
@property (retain, nonatomic) NSNumber *continuousPlay;
@property (retain, nonatomic) BDSCCoverInfo *coverInfo;
@property (copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isFirstFrame;
@property (copy, nonatomic) NSString *bdlinkInfo;
@property (copy, nonatomic) NSString *command;
@property (readonly, copy, nonatomic) NSArray *supportResolutions;
@property (copy, nonatomic) NSString *resolutionShowTitle;
@property (readonly, copy, nonatomic) NSArray *supportResolutionShowTitles;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL support4K;
@property (nonatomic) BOOL shouldReverseResolution;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) BOOL isForcePlay;

- (void)updateProgressInfo:(id)a0;
- (id)showTitleForResolution:(id)a0;
- (id)initWithInfoModel:(id)a0 resolution:(id)a1 progressInfo:(id)a2;
- (id)mainUrlForResolution:(id)a0;
- (BOOL)changeResolution:(id)a0;
- (id)resolutionForShowTitle:(id)a0;
- (id /* block */)takeAirPlayContentGenerator;
- (BOOL)airPlayDisplaySetupPlayerItem:(id)a0;
- (BOOL)isEqualToPlayItem:(id)a0;
- (id)urlModelForResolution:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)initWithUrl:(id)a0;

@end
