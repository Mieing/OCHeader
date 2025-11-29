@class NSString;

@interface AWEStudioComposerPublishInputFeature : AWEStudioComposerBaseFeatureConfig

@property (nonatomic) BOOL enableTitle;
@property (nonatomic) long long actionOptions;
@property (nonatomic) BOOL enableBottomLine;
@property (copy, nonatomic) NSString *placeholderTitle;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
