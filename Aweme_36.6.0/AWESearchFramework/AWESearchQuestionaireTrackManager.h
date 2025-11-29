@class NSMutableDictionary;

@interface AWESearchQuestionaireTrackManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackParamsMap;

+ (id)shareInstance;

- (void)recordTopAiCardFoldState:(BOOL)a0 ForSearchId:(id)a1;
- (id)currentTrackParamsForSearchId:(id)a0;
- (id)defaultTrackParams;
- (void)recordTopAiCardEnterDetailState:(BOOL)a0 ForSearchId:(id)a1;
- (id)getTrackParamsForSearchId:(id)a0;
- (void).cxx_destruct;

@end
