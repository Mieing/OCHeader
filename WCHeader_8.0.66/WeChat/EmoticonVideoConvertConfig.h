@class NSURL, EmoticonCameraEffectConfig;

@interface EmoticonVideoConvertConfig : NSObject

@property (nonatomic) BOOL isSupportWxAM;
@property (nonatomic) int wxamQuality;
@property (retain, nonatomic) NSURL *videoUrl;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) BOOL forceFitSize;
@property (nonatomic) BOOL isFastPlay;
@property (nonatomic) unsigned long long normalFPS;
@property (nonatomic) unsigned long long fastFPS;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) EmoticonCameraEffectConfig *effectConfig;

- (id)init;
- (void).cxx_destruct;

@end
