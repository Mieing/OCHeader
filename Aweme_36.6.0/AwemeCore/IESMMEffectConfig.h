@class NSString;

@interface IESMMEffectConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *algorithmModelPath;
@property (copy, nonatomic) id /* block */ stickerStatusBlock;
@property (copy, nonatomic) id /* block */ stickerStatusBlockV2;
@property (nonatomic) BOOL enableLandscapDetect;
@property (nonatomic) BOOL openBuildChain;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) BOOL useInRecord;
@property (nonatomic) BOOL algorithmUseTwoInput;
@property (copy, nonatomic) NSString *licenseType;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL isProcessMultiInput;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
