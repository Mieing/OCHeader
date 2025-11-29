@class BDMannorAdFeedbackViewModel, UILabel, NSMutableArray, UIView;
@protocol BDMannorAdFeedbackProtocol;

@interface BDMannorAdFeedbackView : UIView

@property (retain, nonatomic) BDMannorAdFeedbackViewModel *model;
@property (weak, nonatomic) id<BDMannorAdFeedbackProtocol> delegate;
@property (retain, nonatomic) NSMutableArray *normalButtonArray;
@property (retain, nonatomic) NSMutableArray *reportButtonArray;
@property (retain, nonatomic) NSMutableArray *partingLineArray;
@property (retain, nonatomic) UILabel *reportLabel;
@property (retain, nonatomic) UIView *feedbackView;

- (id)initWithModel:(id)a0 delegate:(id)a1;
- (void)feedbackViewBack;
- (void)normalActionWithIndex:(unsigned long long)a0;
- (void)reportActionWithIndex:(unsigned long long)a0;
- (id)createNormalButtonWithText:(id)a0;
- (id)createPartingLine;
- (id)createReportButtonWithText:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)layoutUI;

@end
