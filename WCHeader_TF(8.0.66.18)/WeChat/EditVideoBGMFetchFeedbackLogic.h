@class WCStatTimerHelper, NSMutableArray, RecommendedMusicFeedback;
@protocol EditVideoBGMFetchFeedbackLogicDelegate;

@interface EditVideoBGMFetchFeedbackLogic : NSObject

@property (retain, nonatomic) NSMutableArray *recommendedMusicFeedbacks;
@property (retain, nonatomic) RecommendedMusicFeedback *currentRecommendedMusicFeedback;
@property (retain, nonatomic) WCStatTimerHelper *statTimeHelper;
@property (weak, nonatomic) id<EditVideoBGMFetchFeedbackLogicDelegate> delegate;

- (id)init;
- (void)reportForSearch:(unsigned long long)a0 recommentId:(unsigned long long)a1 queryStr:(id)a2 reportType:(unsigned long long)a3 maxIndex:(unsigned long long)a4;
- (void)reportFetchBgmFeedback:(BOOL)a0 withSelected:(id)a1 andRequestId:(unsigned long long)a2 andIsmusicOn:(BOOL)a3 isSearchMusic:(BOOL)a4;
- (void)endLastFeedbackInfo;
- (void)addNewFeedbackInfo:(id)a0 musicIndex:(unsigned long long)a1 behaviorType:(unsigned char)a2;
- (void)addNewFeedbackInfo:(id)a0 musicIndex:(unsigned long long)a1 behaviorType:(unsigned char)a2 searchID:(unsigned long long)a3 searchKeyWork:(id)a4;
- (unsigned long long)bussId;
- (void).cxx_destruct;

@end
