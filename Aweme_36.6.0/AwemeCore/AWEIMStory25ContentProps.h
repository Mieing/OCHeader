@class UIColor, AWEIMMediaViewConfigModel;
@protocol AWEIMCardMessageViewModelInterface;

@interface AWEIMStory25ContentProps : AWEIMUIViewPresenterProps

@property (nonatomic) double feedCardWidth;
@property (nonatomic) double topBackViewWidth;
@property (nonatomic) double topBackViewHeight;
@property (nonatomic) double bottomBackViewWidth;
@property (nonatomic) double bottomBackViewHeight;
@property (retain, nonatomic) UIColor *sideBackgroundColor;
@property (retain, nonatomic) UIColor *sideBorderColor;
@property (nonatomic) double topBackViewAlpha;
@property (nonatomic) double bottomBackViewAlpha;
@property (retain, nonatomic) AWEIMMediaViewConfigModel *replyMediaConfigModel;
@property (weak, nonatomic) id<AWEIMCardMessageViewModelInterface> viewModel;
@property (copy, nonatomic) id /* block */ coverTappedActionBlock;

- (void).cxx_destruct;

@end
