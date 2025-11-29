@class UILabel, NSMutableArray;

@interface BDSCLandscapeOverTimeView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSMutableArray *tipConfigs;

- (void)removeAllConfig;
- (void)addTipConfig:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithTitle:(id)a0;

@end
