@class AWESearchMerchandiseFilterBaseItem, DUXLoadingCircleView, AWELocationServicePersistModel, UIButton;

@interface AWESearchMerchandiseFilterLocationComponent : AWESearchMerchandiseFilterBaseComponent

@property (retain, nonatomic) AWESearchMerchandiseFilterBaseItem *locationButton;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UIButton *relocationButton;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) AWELocationServicePersistModel *locationModel;
@property (copy, nonatomic) id /* block */ showTrackBlock;
@property (copy, nonatomic) id /* block */ clickTrackBlock;

- (void)setupAction;
- (void)autoLocation;
- (void)locationAction;
- (void)relocationAction;
- (void)updateBusinessInfoWithLocationModel:(id)a0;
- (void)goSettingAlertShow;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)setIsSelected:(BOOL)a0;
- (void)requestLocation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshState;
- (void)setManager:(id)a0;
- (void)setupUI;

@end
