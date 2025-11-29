@class VEVideoFillConfig;

@interface VEVideoReaderUnitConfig : NSObject

@property (nonatomic) BOOL infostickerTextureRelease;
@property (nonatomic) BOOL alwaysFirstFrame;
@property (retain, nonatomic) VEVideoFillConfig *videoFillConfig;
@property (nonatomic) int exportFps;

- (void).cxx_destruct;

@end
