@class AWEAwemeSearchVideoShortAnswerModel;

@interface AWESearchVideoCardAnswerThemeView : YYLabel

@property (retain, nonatomic) AWEAwemeSearchVideoShortAnswerModel *shortAnswerModel;

+ (struct CGSize { double x0; double x1; })answerThemeSizeWithModel:(id)a0 width:(double)a1;

- (void)updateWithModel:(id)a0 keyword:(id)a1;
- (void).cxx_destruct;

@end
