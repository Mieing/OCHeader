@class MMLiveVideoEncParam;

@interface MMLivePushMediaConfig : NSObject <NSCopying>

@property (nonatomic) BOOL isVideoEnabled;
@property (nonatomic) BOOL isVideoMuted;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) BOOL isAudioMuted;
@property (retain, nonatomic) MMLiveVideoEncParam *videoEncParam;
@property (nonatomic) BOOL isFrontCamera;
@property (nonatomic) long long captureVolume;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
