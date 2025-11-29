@class AWEFeedNegativeFeedbackFilterManager, AWEFeedNegativeFeedbackFilterRuleManager;

@interface AWEFeedNegativeFeedbackFilterService : NSObject <AWEFeedNegativeFeedbackFilterDataProtocol>

@property (retain, nonatomic) AWEFeedNegativeFeedbackFilterManager *filterManager;
@property (retain, nonatomic) AWEFeedNegativeFeedbackFilterRuleManager *ruleManager;

+ (id)sharedInstance;

- (void)negativeFeedbackWithAuthor:(id)a0 feedbackType:(unsigned long long)a1;
- (void)revertNegativeFeedbackWithAuthorModel:(id)a0 feedbackType:(unsigned long long)a1;
- (BOOL)shouldVideoBeFilteredWithModel:(id)a0;
- (id)filterVideosWithAwemeList:(id)a0;
- (void)negativeFeedbackWithVideo:(id)a0 feedbackType:(unsigned long long)a1;
- (void)revertNegativeFeedbackWithVideoModel:(id)a0 feedbackType:(unsigned long long)a1;
- (id)negativeFeedbackInfoDict;
- (void)negativeFeedbackWithMusic:(id)a0 feedbackType:(unsigned long long)a1;
- (void)negativeFeedbackWithTextExtra:(id)a0 feedbackType:(unsigned long long)a1;
- (void)negativeFeedbackWithVideoTypeTags:(id)a0 feedbackType:(unsigned long long)a1;
- (void)revertNegativeFeedbackWithMusicModel:(id)a0 feedbackType:(unsigned long long)a1;
- (void)revertNegativeFeedbackWithTextExtraModel:(id)a0 feedbackType:(unsigned long long)a1;
- (void)revertNegativeFeedbackWithVideoTypeTagsArray:(id)a0 feedbackType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
