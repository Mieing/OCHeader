@class AWESearchEditPageBottomButton;

@interface AWESearchEditPageBottomBar : UIView

@property (retain, nonatomic) AWESearchEditPageBottomButton *nextButton;
@property (copy, nonatomic) id /* block */ nextButtonClickBlock;

- (void)nextButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
