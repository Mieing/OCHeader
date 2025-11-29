@class NSString, NSDictionary, NSValue, IESEffectModel;

@interface AWEVisionForegroundRenderParams : NSObject

@property (retain, nonatomic) IESEffectModel *model;
@property (retain, nonatomic) NSDictionary *sdkExtra;
@property (nonatomic) BOOL enable1080p;
@property (readonly, nonatomic) BOOL hasForeground;
@property (readonly, nonatomic) NSString *foregroundRenderResourcePath;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } foregroundRenderSize;
@property (readonly, nonatomic) long long foregroundRenderFPS;
@property (readonly, nonatomic) NSValue *foregroundRenderViewFrame;
@property (readonly, nonatomic) long long foregroundRenderFitMode;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
