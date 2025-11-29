@class AWELivePreviewGuide, NSString, NSArray, AWEAwemeModel, NSTimer, AWELiveRoomModel, NSDictionary;

@interface AWELiveFeedStatusViewModel : NSObject

@property (copy, nonatomic) NSString *liveStatusTips;
@property (copy, nonatomic) NSString *liveStatusNextTips;
@property (copy, nonatomic) NSArray *liveIconUrl;
@property (retain, nonatomic) AWEAwemeModel *aweModel;
@property (retain, nonatomic) AWELivePreviewGuide *guideInfo;
@property (nonatomic) long long style;
@property (nonatomic) long long preViewStyle;
@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (copy, nonatomic) NSString *enterTip;
@property (copy, nonatomic) NSString *enterNextTip;
@property (retain, nonatomic) NSTimer *replaceTimer;
@property (retain, nonatomic) NSDictionary *trackData;
@property (nonatomic) BOOL stopPreviewAnimation;
@property (nonatomic) BOOL startShowWeakAnimation;
@property (nonatomic, getter=isOnLive) BOOL onLive;
@property (nonatomic) BOOL clickLabelArea;
@property (nonatomic) BOOL directShowAutoEnterStyle;
@property (nonatomic) BOOL shouldPerformanceDowngrade;
@property (nonatomic) BOOL enableLandscapeInRoom;
@property (nonatomic) BOOL clickLandscapeArea;
@property (nonatomic) BOOL isInnerFeedPrestream;

- (void)dealloc;
- (void)updateWithAwemeModel:(id)a0;
- (BOOL)isAdCoin;
- (BOOL)isVs;
- (void)trackPrestreamWindowAreaPlay;
- (void)showWeakTipEntranceAnimation;
- (void)showWeakTipEntranceAnimationNotRoomMarked;
- (void)trackPrestreamWindowAreaShow;
- (void)adTrackPrestreamWindowAreaShow;
- (void)updateWithLiveStatus:(BOOL)a0;
- (id)liveStatusTipsTextWithOnLiveStatus:(BOOL)a0;
- (void)updateAutoEnterTips;
- (BOOL)isPreStreamEnhanceStyle;
- (void)onEnterLiveRoom;
- (void)onPrestreamLiveShow;
- (void)updateTrackData:(id)a0;
- (BOOL)isShowWeakEntranceBg;
- (void)onQuitLiveRoom;
- (BOOL)isPremiere;
- (void)trackPrestreamScreenRotateIconShow;
- (BOOL)enableAutoEnterLive;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)defaultText;

@end
