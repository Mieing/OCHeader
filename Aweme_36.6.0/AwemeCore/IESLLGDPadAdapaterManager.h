@interface IESLLGDPadAdapaterManager : NSObject

@property (nonatomic) double padScreenWidth;
@property (nonatomic) BOOL enablePadAdapter;
@property (nonatomic) BOOL enableMobileAdapter;
@property (nonatomic) BOOL isPad;

+ (id)sharedManager;

- (BOOL)isPadDevice;
- (BOOL)didHitPadAdapater;
- (BOOL)didHitMobileAdapater;
- (void)resetPadScreenWidth;
- (void)updatePadScreenWidthForSplitScreen:(struct { long long x0; long long x1; })a0;
- (void)updatePadScreenWidth:(struct { long long x0; long long x1; })a0;
- (id)appendPadAdapterParams:(id)a0;

@end
