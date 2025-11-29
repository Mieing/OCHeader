@class CAGradientLayer, NSArray, NSString, UIView, MMTableView;

@interface SharePreConfirmHeadView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *topGradientMaskView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *bottomGradientMaskView;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (nonatomic) double tableViewTopShowY;
@property (nonatomic) double tableViewBottomShowY;
@property (retain, nonatomic) NSArray *arrContacts;
@property (nonatomic) BOOL isFakeContact;
@property (nonatomic) BOOL clickEnabled;
@property (copy, nonatomic) id /* block */ onClickHeadImageOrUserName;
@property (copy, nonatomic) id /* block */ onViewMsgContent;
@property (copy, nonatomic) id /* block */ onScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContacts:(id)a0;
- (void)layoutSubviews;
- (void)sizeToFitWidth:(double)a0;
- (void)setContentToTableFooter:(id)a0;
- (BOOL)footerViewTotalVisible;
- (void)initView;
- (void)initGradientView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;

@end
