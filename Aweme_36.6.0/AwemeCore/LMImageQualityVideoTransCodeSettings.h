@class NSString;

@interface LMImageQualityVideoTransCodeSettings : NSObject {
    void /* function */ bitrate;
    void /* function */ remuxBitrateLimitJson;
    void /* function */ clipRange;
    void /* function */ exportPreset;
}

@property (nonatomic, copy) NSString *bitrate;
@property (nonatomic) struct CGSize { double x0; double x1; } resolution;
@property (nonatomic, copy) NSString *remuxBitrateLimitJson;
@property (nonatomic) struct CGSize { double x0; double x1; } remuxResolutionLimit;
@property (nonatomic, copy) NSString *clipRange;
@property (nonatomic, copy) NSString *exportPreset;

- (void).cxx_destruct;
- (id)init;

@end
