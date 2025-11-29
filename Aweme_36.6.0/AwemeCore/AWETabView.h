@class NSArray, AWEStudioNumButton, UIView, NSMutableArray, UIScrollView;

@interface AWETabView : UIView

@property (copy, nonatomic) NSArray *namesOfTabs;
@property (retain, nonatomic) NSMutableArray *tabs;
@property (retain, nonatomic) NSMutableArray *views;
@property (nonatomic) long long numberOfTabs;
@property (retain, nonatomic) AWEStudioNumButton *currentChooseTab;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *tabContentView;
@property (retain, nonatomic) UIScrollView *buttonContentView;
@property (copy, nonatomic) id /* block */ clickedTabBlock;
@property (copy, nonatomic) id /* block */ shouldClickTabBlock;

- (void)setNamesOfTabs:(id)a0 views:(id)a1 withStartIndex:(long long)a2;
- (void)clickedTab:(id)a0;
- (void)changeColor:(id)a0 color:(id)a1 font:(id)a2;
- (void)setNamesOfTabs:(id)a0 views:(id)a1;
- (void)clickTabAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
