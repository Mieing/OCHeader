@class NSArray, ACCEditTagsPOISearchType, CAShapeLayer, UIView, NSString, UITableView;
@protocol ACCEditTagsPOISearchTypeSelectionViewDelegate;

@interface ACCEditTagsPOISearchTypeSelectionView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) ACCEditTagsPOISearchType *selectedSearchType;
@property (nonatomic) double topInset;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<ACCEditTagsPOISearchTypeSelectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)handleTapOnSafeArea;
- (double)menuHeight;
- (void)updateWithSearchTypes:(id)a0 selectedType:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)animationDuration;
- (double)cellHeight;

@end
