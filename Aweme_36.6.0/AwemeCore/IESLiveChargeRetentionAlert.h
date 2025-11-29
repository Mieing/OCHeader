@class NSArray, UIImageView, NSString, UILabel, UIView, UITableView;

@interface IESLiveChargeRetentionAlert : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *remindView;
@property (retain, nonatomic) UILabel *remindTitle;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UITableView *remindTableView;
@property (retain, nonatomic) UIView *rowLine;
@property (retain, nonatomic) UIView *midLine;
@property (retain, nonatomic) UIView *cancelView;
@property (retain, nonatomic) UIView *confirmView;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (retain, nonatomic) UILabel *confirmLabel;
@property (copy, nonatomic) NSArray *cellModels;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapCancel;
- (void)tapConfirm;
- (void)loadTableViewData;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
