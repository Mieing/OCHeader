@class NSArray, UIImageView, NSString, UIView, UITableView;

@interface IESLiveFunctionSquarePopoverView : HTSEventForwardingView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) unsigned long long arrowDirection;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItems:(id)a0 arrowDirection:(unsigned long long)a1;
- (void)close;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)hide;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2;
- (void)setupUI;

@end
