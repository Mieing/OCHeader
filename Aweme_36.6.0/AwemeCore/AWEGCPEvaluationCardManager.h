@class AWEGCPEvaluationPublishStarView, NSString, NSDictionary, AWEAwemeModel, UIView, NSMutableArray;
@protocol IESGCPStorageService;

@interface AWEGCPEvaluationCardManager : NSObject <AWEGCPEvaluationPublishStarViewDelegate, AWEGCPEvaluationCardManagerRouter>

@property (retain, nonatomic) AWEGCPEvaluationPublishStarView *starCardView;
@property (nonatomic) BOOL isCardShowing;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) long long cardType;
@property (nonatomic) long long showTimes;
@property (retain, nonatomic) id<IESGCPStorageService> frequencyStorage;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ viewAppearingBlock;
@property (copy, nonatomic) id /* block */ viewDisappearingBlock;
@property (copy, nonatomic) id /* block */ displayingBlock;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (nonatomic) double cardLeftOffsetX;
@property (nonatomic) double cardBottomOffsetY;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *bottomAlignView;

- (id)commonParams;
- (void)unregisterSubscriber;
- (void)setupEvaluationCardWithModel:(id)a0 parentView:(id)a1;
- (void)registerEventSubscriber;
- (void)handlePublishEvaluation:(id)a0;
- (void)receivePublishEvaluationEvent:(id)a0;
- (void)recordEvaluationPublish;
- (void)hideEvaluationCardView;
- (void)handleLogExtraParams:(id)a0;
- (void)createStarCardView;
- (BOOL)isPersonalHomepage;
- (BOOL)isHomePageFollow;
- (BOOL)isHomepageFamiliar;
- (void)showEvaluationCardImmediately;
- (void)showEvaluationCardView;
- (void)recordShowFrequency;
- (void)updateCardShowTimes;
- (void)recordClose;
- (void)jumpEvaluationPublishWithGameId:(id)a0 rating:(double)a1;
- (void)closeStarCardView;
- (void)updateStarCardSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateRating:(double)a0;
- (void)trackCardDisplay;
- (void)trackStarClick:(id)a0;
- (void)tryShowing;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
