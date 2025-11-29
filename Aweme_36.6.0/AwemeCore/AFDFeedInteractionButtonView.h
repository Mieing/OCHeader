@class NSString, AFDButton, UIColor;

@interface AFDFeedInteractionButtonView : UIView

@property (retain, nonatomic) AFDButton *primaryBtn;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) UIColor *bgColor;
@property (copy, nonatomic) id /* block */ btnClickBlock;

+ (id)buttonWithConfigBlock:(id /* block */)a0;

- (void)primaryBtnClicked;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
