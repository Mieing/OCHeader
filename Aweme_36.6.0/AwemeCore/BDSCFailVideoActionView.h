@class NSMutableArray;

@interface BDSCFailVideoActionView : UIView

@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (nonatomic) BOOL isBigStyle;
@property (nonatomic) BOOL inGreyActionMode;

- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)reload;
- (void)rebuildConstraints;

@end
