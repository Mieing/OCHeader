@class NSNumber;

@interface AWEPOICubeConfig : NSObject

@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) BOOL disableBigFontMode;
@property (nonatomic) BOOL enableRadonCompatible;
@property (nonatomic) BOOL enableLynxMultiAsyncThread;
@property (retain, nonatomic) NSNumber *enableJSRuntime;
@property (nonatomic) BOOL enableAirStrictMode;
@property (nonatomic) long long threadStrategy;

- (long long)threadStrategyForBDX;
- (void).cxx_destruct;
- (id)init;

@end
