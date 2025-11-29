@class NSString, NSDictionary;

@interface IESLiveStreamCaptureConfig : NSObject

@property (nonatomic) long long mode;
@property (nonatomic) BOOL useExternalCamera;
@property (nonatomic) BOOL useNewEffectLabAPI;
@property (nonatomic) BOOL useAmazing;
@property (nonatomic) BOOL useEffectProcessRawTextureAPI;
@property (nonatomic) BOOL useEffectSetWidthHeightV2;
@property (copy, nonatomic) NSString *effectPlatformConfig;
@property (copy, nonatomic) NSString *backgroundColorOfCanvas;
@property (nonatomic) BOOL enableEffectMultiTrack;
@property (nonatomic) BOOL asyncInit;
@property (copy, nonatomic) NSDictionary *streamCaptureConfigParams;
@property (copy, nonatomic) NSString *effectLicense;
@property (nonatomic) BOOL isAnchor;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
