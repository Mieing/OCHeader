@class NSString, NSTimer, NSDictionary, AWEAwemeModel, NSDate, AWELivePreStreamContext;

@interface AWELivePreStreamFeedbackViewModel : NSObject <AWELivePrestreamFeedbackMessage>

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *trackData;
@property (retain, nonatomic) NSDate *startShowTime;
@property (nonatomic) BOOL didShowFeedBack;
@property (nonatomic) BOOL userDidClose;
@property (nonatomic) BOOL userDidNegativeLive;
@property (retain, nonatomic) NSString *flowType;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL didEndedLive;
@property (nonatomic) BOOL positiveEnterRoom;
@property (copy, nonatomic) id /* block */ userDidNegativeBlock;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)viewDidFirstScreen;
- (id)lynxURL;
- (void)onFeedbackStateChange:(long long)a0 toastInfo:(id)a1;
- (void)onPreViewUserFeedbackCardShowInLive:(id)a0;
- (void)onEnterLiveRoom;
- (void)insertFeedbackDataInPreview:(id)a0;
- (void)makeBottomContainer:(id)a0 withOffset:(double)a1;
- (BOOL)enableNewFeedbackCardWithoutBlur;
- (id)lynxInitialData;
- (BOOL)p_hasShownCard;
- (long long)p_getWatchTime;
- (void)showFeedbackForCountDownIfNeed;
- (void)p_stopShowFeedbackCardShowAndDuration;
- (BOOL)isHitTimeIntervalCheck;
- (void)postUserFeedbackCardIShow;
- (id)p_getFeedbackId;
- (id)p_getFeedbackScene;
- (id)feedbackCardEventData;
- (id)getQuestionType;
- (id)lynxDataExtraParams;
- (void)updateWithLiveRoomModel:(id)a0;
- (void)onStreamPause;
- (void)showFeedBackCard;
- (void)onAudienceQuitLiveRoom;
- (BOOL)blockScroll;
- (id)dataForRoom;
- (void).cxx_destruct;
- (void)resetTimer;
- (long long)feedbackType;
- (void)reset;
- (id)fallbackURL;
- (void)dealloc;
- (id)cardType;
- (id)roomID;
- (id)initWithTrackData:(id)a0;

@end
