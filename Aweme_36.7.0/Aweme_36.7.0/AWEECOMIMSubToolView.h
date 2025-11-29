@class NSArray, UIImageView, NSString, AWEECOMIMPageTrackUtil, AWEECOMIMPageClickUtil, UITableView;

@interface AWEECOMIMSubToolView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *bkgView;
@property (copy, nonatomic) NSArray *modelArr;
@property (retain, nonatomic) AWEECOMIMPageClickUtil *pageClickUtil;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSubToolViewWithModelArr:(id)a0 pageClickUtil:(id)a1 pageTrackUtil:(id)a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (BOOL)isDarkTheme;
- (void)setupUI;
- (void)tapAction:(id)a0;

@end
