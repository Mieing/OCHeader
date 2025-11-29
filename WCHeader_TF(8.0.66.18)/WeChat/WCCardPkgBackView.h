@class CAGradientLayer, NSArray, NSString, WCCardPkgBackTableView, MMUIButton;
@protocol WCCardPkgBackViewDelegate;

@interface WCCardPkgBackView : MMUIView <UITableViewDelegate, UITableViewDataSource, WCCardPkgBackTableViewDelegate>

@property (retain, nonatomic) WCCardPkgBackTableView *tableView;
@property (retain, nonatomic) MMUIButton *sureButton;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (retain, nonatomic) NSArray *sameTpCardDataListList;
@property (weak, nonatomic) id<WCCardPkgBackViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (double)WXCardPkgTableViewMaxHeight;
- (void)WXCardPkgTableViewHeight:(double)a0 scrollEnabled:(BOOL)a1;
- (void)sureButtonDidSelected;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSureButtonColor:(id)a0;
- (void)setSureButtonText:(id)a0;
- (void)setSureButtonAbled:(BOOL)a0;
- (void)reloadTableViewData;
- (void)configurateCell:(id)a0;
- (void)loadCellSubView:(id)a0 cardIndex:(long long)a1;
- (void)handleIsHaveAvailableCardWithList:(id)a0;
- (void).cxx_destruct;

@end
