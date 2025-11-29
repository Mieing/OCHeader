@class NSArray;

@interface BDSCLandscapeSpeedSelectionViewController : BDSCLandscapeSingleSelectionViewController

@property (copy, nonatomic) NSArray *supportedSpeeds;
@property (nonatomic) double currentSpeed;

- (void)configWithModel:(id)a0;
- (id)dataSourceArray;
- (BOOL)isSelectedForItem:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)itemHeight;
- (void)selectItemAtIndex:(long long)a0;

@end
