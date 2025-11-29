@class NSArray;

@interface AWEUserLoginOverseaBottomView : UIView

@property (retain, nonatomic) NSArray *thirdList;
@property (copy, nonatomic) id /* block */ otherClickAction;
@property (copy, nonatomic) id /* block */ loginClick;
@property (readonly, copy, nonatomic) NSArray *onShowThirdPlatforms;

- (id)thirdViewWithPlatform:(unsigned long long)a0;
- (void)clickFindAccountButton;
- (id)initWithOverseaThirdList:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
