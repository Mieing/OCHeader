@class NSString, NSMutableDictionary, NSDictionary, NSMutableSet, AWEECShoppingAIGuideDataManager, UIResponder, AWEECShoppingAIGuideEventParamModel;

@interface AWEECShoppingAIGuideTracker : NSObject

@property (nonatomic) double enterTime;
@property (retain, nonatomic) NSMutableSet *shownToken;
@property (retain, nonatomic) NSDictionary *contextParams;
@property (retain, nonatomic) NSMutableDictionary *hybridTrackRecords;
@property (nonatomic) unsigned long long agentType;
@property (retain, nonatomic) AWEECShoppingAIGuideEventParamModel *eventData;
@property (weak, nonatomic) AWEECShoppingAIGuideDataManager *weakDataManager;
@property (weak, nonatomic) UIResponder *hostPage;
@property (copy, nonatomic) NSString *incomeQuery;
@property (copy, nonatomic) NSString *incomeQueryID;
@property (copy, nonatomic) NSDictionary *incomeQueryExtra;

- (id)baseParams;
- (void)trackButtonShowInMessage:(id)a0 name:(id)a1;
- (void)trackMessageShow:(id)a0;
- (void)trackButtonShow:(id)a0;
- (void)trackWelcomeMessageShowWithType:(unsigned long long)a0;
- (void)trackMessageSent:(id)a0;
- (void)cleanAllHybirdCardTrackRecord;
- (void)trackButtonClickInMessage:(id)a0 moduleName:(id)a1 buttonType:(id)a2;
- (id)paramsFromMessage:(id)a0;
- (void)trackFullTextPopupShowOfMessage:(id)a0;
- (void)trackSearchWordShowInMessage:(id)a0 name:(id)a1 location:(id)a2;
- (void)trackButtonClickInMessage:(id)a0 name:(id)a1;
- (id)paramsFromSingleMessage:(id)a0;
- (void)trackLLMTextSuccessInMessageInMessage:(id)a0 extraParams:(id)a1;
- (void)trackLLMTextShowInMessage:(id)a0 extraParams:(id)a1;
- (void)trackEventInSingleMsg:(id)a0 name:(id)a1 params:(id)a2;
- (void)trackWelcomeSUGShow:(id)a0;
- (void)trackWelcomeSUGClick:(id)a0;
- (void)trackBottomSUGShow:(id)a0 withPosition:(long long)a1;
- (void)trackBottomSUGCellShowWithItemCount:(unsigned long long)a0;
- (void)trackBottomSUGClick:(id)a0 withPosition:(long long)a1;
- (void)trackInputSUGWordClick:(id)a0 withRawQuery:(id)a1 position:(long long)a2;
- (void)trackInputSUGShowWithRawQuery:(id)a0 count:(unsigned long long)a1;
- (void)trackInputSUGWordShow:(id)a0 withRawQuery:(id)a1 position:(long long)a2;
- (id)pageBTM;
- (void)trackButtonClick:(id)a0 params:(id)a1 writeToLog:(BOOL)a2;
- (BOOL)isShownWithToken:(id)a0;
- (void)updateTrackerWithRouteParams:(id)a0;
- (void)trackPageShowWithHost:(id)a0;
- (void)trackPageDurationWithHost:(id)a0;
- (void)trackButtonClick:(id)a0;
- (void)trackToast:(id)a0;
- (void)trackSearchWordClickInMessage:(id)a0 name:(id)a1 location:(id)a2;
- (void)trackEventInMessage:(id)a0 name:(id)a1 params:(id)a2;
- (void)dealHybirdCardTrackWithParams:(id)a0;
- (void)cleanHybirdCardTrackWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (id)pageName;

@end
