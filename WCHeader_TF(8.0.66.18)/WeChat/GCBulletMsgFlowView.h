@class NSArray, MMTimer, NSString, UIView, NSMutableArray, UITableView;

@interface GCBulletMsgFlowView : UIView <UITableViewDelegate, UITableViewDataSource, GCBulletMsgFlowCellDelegate>

@property (copy, nonatomic) NSArray *originMsgList;
@property (copy, nonatomic) NSMutableArray *displayMsgList;
@property (retain, nonatomic) UIView *tableViewContainer;
@property (retain, nonatomic) UITableView *msgTableView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) MMTimer *displayTimer;
@property (nonatomic) long long curLoadIndex;
@property (nonatomic) BOOL isThinStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configTableViewContainerGradientLayer;
- (void)configLineView;
- (double)tableViewWidth;
- (double)msgLabelWidth;
- (void)startRepeatLoopWhenOneRoundFinish;
- (void)startLoadMsgLoop;
- (void)loadBulletMsgList:(id)a0;
- (void)tableViewScrollToBottomWithAnimation:(BOOL)a0;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;

@end
