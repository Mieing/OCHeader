@class BTRecommendFeedbackInfo, BTRecommendSectionData;

@interface BTBaseRecommendMsgCellViewModel : BTBaseItemCellViewModel

@property (nonatomic) unsigned int itemIndex;
@property (weak, nonatomic) BTRecommendSectionData *sectionData;
@property (readonly, nonatomic) BTRecommendFeedbackInfo *feedbackInfo;
@property (readonly, nonatomic) BOOL bShowFeedback;

- (void)updateWithSectionData:(id)a0 msgWrap:(id)a1 itemIndex:(unsigned int)a2 viewWidth:(double)a3;
- (void)clearCacheOnDataChanged;
- (double)separateLineWidth;
- (void).cxx_destruct;

@end
