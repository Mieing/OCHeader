@class NSArray, UIView;

@interface IESLiveChatChannelGreetView : UIView

@property (retain, nonatomic) UIView *greetEmojisContainer;
@property (retain, nonatomic) NSArray *greetModels;
@property (nonatomic) long long greetsShowNums;
@property (nonatomic) BOOL disableClick;
@property (copy, nonatomic) id /* block */ didClickedGreet;
@property (nonatomic) long long showNums;

- (void)setupGreetEmojisContainer;
- (void)didClicked:(id)a0;
- (void)refreshWithNums:(long long)a0;
- (id)initWithGreetModels:(id)a0;
- (void)disableClick:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
