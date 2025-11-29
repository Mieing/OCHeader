@class NSArray, NSString;

@interface BDSCLandscapeResolutionSelectionViewController : BDSCLandscapeSingleSelectionViewController

@property (copy, nonatomic) NSArray *supportedResolutions;
@property (copy, nonatomic) NSString *currentResolution;
@property (copy, nonatomic) NSArray *limitedResolutions;
@property (nonatomic) BOOL currentSelectAuto;

- (void)configWithModel:(id)a0;
- (id)dataSourceArray;
- (void)updateLimitedResolution:(id)a0;
- (BOOL)isSelectedForItem:(id)a0;
- (id)tagArrayAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)selectItemAtIndex:(long long)a0;

@end
