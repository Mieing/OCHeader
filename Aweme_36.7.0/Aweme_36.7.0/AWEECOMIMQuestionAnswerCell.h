@class AWEECOMIMQuestionListView, AWEECOMIMQuestionAnswerMsgModel, NSString;

@interface AWEECOMIMQuestionAnswerCell : AWEECOMIMBaseUserMsgCell <AWEECOMIMQuestionListViewDelegate>

@property (retain, nonatomic) AWEECOMIMQuestionListView *questionsView;
@property (retain, nonatomic) AWEECOMIMQuestionAnswerMsgModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)questionListViewDidSendQuesitonAnswer:(id)a0;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
