@interface BDImageSharpConfig : NSObject

@property (nonatomic) unsigned long long sharpAlgorithm;
@property (nonatomic) float wt;
@property (nonatomic) float thr;
@property (nonatomic) float ovrt;
@property (nonatomic) BOOL enableAdaptive;
@property (nonatomic) float g0;
@property (nonatomic) float lc_wt_thr;

+ (id)strongSharpConfig;
+ (id)mediumSharpConfig;
+ (id)weakSharpConfig;
+ (id)veryWeakSharpConfig;

- (BOOL)isEmptyConfig;
- (id)initWithoutConfig;
- (void)configWeakSharp;
- (void)configStrongSharp;
- (void)configMediumSharp;
- (void)configVeryWeakSharp;
- (id)init;

@end
