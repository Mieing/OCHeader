@class UIButton, NSArray, NSString, UIView, UITableView;

@interface BDPVideoPortraitAlertView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *timorMaskView;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long selectIndex;
@property (copy, nonatomic) NSArray *infoList;
@property (copy, nonatomic) id /* block */ execBlk;
@property (copy, nonatomic) id /* block */ backgroundClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeWithAnimated:(BOOL)a0;
- (id)createLayer;
- (void)showWithAnimated:(BOOL)a0;
- (void)backgroundClicked;
- (id)initWithInfoList:(id)a0 type:(unsigned long long)a1 select:(long long)a2;
- (void)setSelectedDefinition:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
