@interface VideoEncodeParamsInternal : NSObject

@property (nonatomic) float frameInterval;
@property (nonatomic) float audioBitrate;
@property (nonatomic) long long codec;
@property (nonatomic) BOOL videoOnly;
@property (nonatomic) long long configCount;
@property (nonatomic) struct WxVideoConfigPara { float x0; float x1; float x2; float x3; float x4; float x5; float x6; } *configs;

- (void)dealloc;
- (id)description;

@end
