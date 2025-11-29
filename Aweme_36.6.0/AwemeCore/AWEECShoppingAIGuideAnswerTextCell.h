@class AWEECShoppingAIGuideGrowingLabel, NSString, AWEECShoppingAIGuideMessageSingleTextViewModel;

@interface AWEECShoppingAIGuideAnswerTextCell : AWEECShoppingAIGuideAnswerBaseCell <AWEECShoppingAIGuideGrowingLabelDelegate>

@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleTextViewModel *textViewModel;
@property (retain, nonatomic) AWEECShoppingAIGuideGrowingLabel *lastLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupCardWithModel:(id)a0;
- (void)reloadWithSingleMsgViewModel:(id)a0;
- (void)operateTyperWriterNoti:(id)a0;
- (void)growingLabelDidUpdateHeight:(id)a0;
- (void)growingLabelDidFold:(id)a0;
- (void)growingLabelDidCompleteTypewriter:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
