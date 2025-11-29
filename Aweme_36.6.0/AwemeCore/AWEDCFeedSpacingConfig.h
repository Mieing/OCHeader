@interface AWEDCFeedSpacingConfig : AWEDCFeedBaseConfig

@property (nonatomic) long long horizontalSpacing;
@property (nonatomic) long long verticalSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } totalSectionsInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) long long minimumInteritemSpacing;
@property (nonatomic) long long minimumLineSpacing;

- (void)setupDefaultConfig;
- (BOOL)enablePadConfig;
- (id)padDCConfig;
- (double)padSpacing;

@end
