@class UITapGestureRecognizer, NSString, AWEAwemeModel, UIView, UITableView;
@protocol AWELandscapeResolutionSettingsViewDelegate;

@interface AWELandscapeResolutionSettingsView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long currentManualGearType;
@property (weak, nonatomic) id<AWELandscapeResolutionSettingsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissMorePanelWithCompletion:(id /* block */)a0;
- (void)handleClickDismissView:(id)a0;
- (void)showOnView:(id)a0 model:(id)a1 manualGearType:(unsigned long long)a2;
- (double)calculateTableViewHeightWithContainerHeight:(double)a0;
- (void)changeAndScrollToTargetManualGearType:(unsigned long long)a0;
- (id)manualGearTypes;
- (void)changeCurrentManualGearType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)cellHeight;
- (double)panelWidth;

@end
