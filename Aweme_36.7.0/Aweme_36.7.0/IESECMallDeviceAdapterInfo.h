@class NSArray, NSString;

@interface IESECMallDeviceAdapterInfo : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long breakpoint;
@property (nonatomic) long long screenType;
@property (nonatomic) double containerWidth;
@property (nonatomic) double metricsWidth;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (nonatomic) long long column;
@property (nonatomic) double scaleRatio;
@property (copy, nonatomic) NSArray *tileLayout;
@property (copy, nonatomic) NSString *orientation;

+ (BOOL)needPadAdapter;
+ (BOOL)isPad;
+ (BOOL)isHorizontal;

- (id)initWithType:(long long)a0 breakPoint:(long long)a1 screenType:(long long)a2 containerWidth:(double)a3;
- (id)adapterRootInfo;
- (void)updateWithBreakPoint:(long long)a0 screenType:(long long)a1 containerWidth:(double)a2;
- (double)containerRealWidth;
- (void)buildScale;
- (void)buildFull;
- (void).cxx_destruct;
- (void)build;
- (id)init;
- (void)dealloc;

@end
