@class AWESearchVideoCardAnswerTagView, NSString, AWEModernFeedFeedbackEntranceView, AWEGeneralSearchVideoCardModel, UIView, AWEAwemeModel, AWESearchVideoCardAnswerThemeView;

@interface AWESearchVideoCardAnswerTagComponent : AWESearchComponent <AWESearchVideoCardAnswerTagComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEModernFeedFeedbackEntranceView *feedbackView;
@property (retain, nonatomic) AWESearchVideoCardAnswerTagView *answerTagView;
@property (retain, nonatomic) AWESearchVideoCardAnswerThemeView *answerThemeView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })calculateSizeWithModel:(id)a0 Width:(double)a1;
+ (BOOL)showAnswerTagWithModel:(id)a0;

- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)setModelOnly:(id)a0;
- (id)descProvider;
- (void)trackFeedbackViewShowEvent;
- (void)trackFeedbackBtnClickEvent;
- (void)clickAnswerTag:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;
- (id)abstractProvider;

@end
