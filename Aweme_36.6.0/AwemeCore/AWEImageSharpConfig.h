@interface AWEImageSharpConfig : NSObject

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

- (id)initWithBDConfig:(id)a0;

@end
