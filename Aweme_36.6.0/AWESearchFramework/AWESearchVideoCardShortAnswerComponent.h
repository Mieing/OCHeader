@class AWESearchVideoCardAnswerThemeView, NSString, UIImageView, AWEGeneralSearchVideoCardModel, UIView, AWEAwemeModel, YYLabel;

@interface AWESearchVideoCardShortAnswerComponent : AWESearchComponent <AWESearchVideoCardShortAnswerComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) YYLabel *answerText;
@property (retain, nonatomic) UIImageView *lineView;
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
+ (id)shortAnswerTextWithModel:(id)a0;

- (id)playerProvider;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)trackSearchResultClick;
- (void)setModelOnly:(id)a0;
- (id)descProvider;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;
- (id)abstractProvider;

@end
