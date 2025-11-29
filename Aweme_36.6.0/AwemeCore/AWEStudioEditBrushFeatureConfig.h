@class NSNumber, NSArray, UIColor;

@interface AWEStudioEditBrushFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (nonatomic) BOOL barItemEnabled;
@property (copy, nonatomic) NSNumber *defaultColorSelectedIndex;
@property (copy, nonatomic) NSArray *subtypes;
@property (copy, nonatomic) NSNumber *forcePlainStyle;
@property (copy, nonatomic) UIColor *middleLineColor;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
