@interface BTReaderStyleRecommendMsgHeaderCellViewModel : BTBaseRecommendMsgCellViewModel

- (id)itemViewClassName;
- (double)viewHeight;
- (id)headerLabelFont;
- (BOOL)bShowHeaderLabel;
- (id)headerLabelStr:(double)a0;
- (BOOL)bShowAggregationLabel;
- (id)aggregationLabelFont;
- (id)aggregationLabelStr;
- (id)aggregationLabelUrl;
- (BOOL)bShowTimeLabel;
- (id)timeLabelFont;
- (id)timeLabelStr;
- (id)feedbackInfo;

@end
