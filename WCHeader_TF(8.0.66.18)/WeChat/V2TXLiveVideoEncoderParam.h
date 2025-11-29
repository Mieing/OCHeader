@interface V2TXLiveVideoEncoderParam : NSObject

@property (nonatomic) long long videoResolution;
@property (nonatomic) long long videoResolutionMode;
@property (nonatomic) int videoFps;
@property (nonatomic) int videoBitrate;
@property (nonatomic) int minVideoBitrate;

- (id)init;
- (id)initWith:(long long)a0;
- (void)configWith:(long long)a0;
- (id)description;

@end
