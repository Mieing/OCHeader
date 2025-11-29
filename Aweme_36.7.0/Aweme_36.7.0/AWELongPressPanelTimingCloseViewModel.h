@class UILabel, AWEBinding;
@protocol AWENavigationItemCellProtocol;

@interface AWELongPressPanelTimingCloseViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) AWEBinding *timingCloseBinding;
@property (retain, nonatomic) AWEBinding *timingCloseTypeBinding;
@property (weak, nonatomic) id<AWENavigationItemCellProtocol> navigationItemCell;

+ (id)formateDuration:(id)a0;
+ (id)longPressPanelViewModel;

- (void)trackTimingCloseClick;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)didUpdateCell:(id)a0;
- (void)updateStatusLabelByRemainTime;
- (void)updateNavigationItemCellWithTimingCloseState;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
