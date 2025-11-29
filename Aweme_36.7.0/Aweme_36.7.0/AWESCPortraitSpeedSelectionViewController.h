@class NSArray;

@interface AWESCPortraitSpeedSelectionViewController : AWESCPortraitSingleSelectionViewController

@property (copy, nonatomic) NSArray *supportedSpeeds;
@property (nonatomic) double currentSpeed;

- (void)configWithModel:(id)a0;
- (long long)currentSelectedIndex;
- (id)dataSourceArray;
- (void).cxx_destruct;
- (id)titleString;
- (void)selectItemAtIndex:(long long)a0;

@end
