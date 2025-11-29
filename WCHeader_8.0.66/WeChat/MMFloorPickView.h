@class NSIndexPath, NSString, NSArray, QMapView, UITableView;

@interface MMFloorPickView : UIView <UITableViewDataSource, UITableViewDelegate> {
    NSArray *levels;
    NSString *buildingId;
    NSIndexPath *selectIndexPath;
}

@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) QMapView *mapView;
@property (nonatomic) BOOL needHidden;
@property (nonatomic) double scaleLength;
@property (nonatomic) long long reportShowCount;
@property (nonatomic) long long reportTapCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)changeActiveBuilding:(id)a0;
- (void)changeActiveIndoorInfo:(id)a0;
- (void)updateCurrentStatus;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
