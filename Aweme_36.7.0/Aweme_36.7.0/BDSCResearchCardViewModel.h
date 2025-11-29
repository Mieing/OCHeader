@class NSArray, NSMutableDictionary, UIImage, BDByteScreenCastTracker, BDSCResearchCardQuestion;

@interface BDSCResearchCardViewModel : NSObject

@property (copy, nonatomic) NSArray *questionArray;
@property (nonatomic) BOOL isSkip;
@property (nonatomic) BOOL isOpenTV;
@property (nonatomic) BOOL isOpenXsg;
@property (nonatomic) BOOL isConnectWiFi;
@property (nonatomic) BOOL isOpenSinkApp;
@property (nonatomic) BOOL isOtherAppCanSearch;
@property (retain, nonatomic) NSMutableDictionary *questionAnswerInfo;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL isShowSolution;
@property (retain, nonatomic) UIImage *refreshImage;
@property (nonatomic) BOOL didTriggerFeedbackRequest;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) BDByteScreenCastTracker *tracker;
@property (readonly, nonatomic) long long questionCount;
@property (readonly, nonatomic) BDSCResearchCardQuestion *currentQuestion;
@property (copy, nonatomic) id /* block */ didUseCardBlock;

- (void)buildQuestions;
- (id)buildSolutions;
- (id)buildFeedbackSolution;
- (void)nextQuestion;
- (void)questionChoose:(unsigned long long)a0;
- (id)stringValueForChoose:(unsigned long long)a0;
- (void)trackResearchActionWithChoose:(unsigned long long)a0;
- (void)skipQuestion;
- (id)handleSchemeString:(id)a0;
- (void)trackPostFeedbackCompletion;
- (void)postFeedbackWithCompletion:(id /* block */)a0;
- (void)trackSolutionShow;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)init;
- (void)preloadImages;

@end
