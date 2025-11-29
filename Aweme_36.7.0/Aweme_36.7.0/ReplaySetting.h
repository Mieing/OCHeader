@interface ReplaySetting : IESLivePBBaseMessage

@property (nonatomic) BOOL replayEnabled;
@property (nonatomic) BOOL replayAutoPost;
@property (nonatomic) BOOL replaySyncXitou;
@property (nonatomic) BOOL replaySyncProduct;
@property (nonatomic) BOOL replayProductExposit;
@property (nonatomic) BOOL realtimeReplayEnabled;
@property (nonatomic) BOOL ugcVsReplayAutoPost;
@property (nonatomic) BOOL replayHghlightAuthorizationAuth;

+ (id)descriptor;

@end
