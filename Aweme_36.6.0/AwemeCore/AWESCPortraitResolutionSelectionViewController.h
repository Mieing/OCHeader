@class NSArray, NSString;

@interface AWESCPortraitResolutionSelectionViewController : AWESCPortraitSingleSelectionViewController

@property (copy, nonatomic) NSArray *supportedResolutions;
@property (copy, nonatomic) NSString *currentResolution;
@property (copy, nonatomic) NSArray *limitedResolutions;
@property (nonatomic) BOOL currentSelectAuto;

- (void)configWithModel:(id)a0;
- (long long)currentSelectedIndex;
- (id)dataSourceArray;
- (id)tagTextAtIndex:(long long)a0;
- (void)updateLimitedResolution:(id)a0;
- (void).cxx_destruct;
- (id)titleString;
- (void)selectItemAtIndex:(long long)a0;

@end
