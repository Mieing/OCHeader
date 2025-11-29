@class NSString;

@interface V2TXLivePlayerJSConfig : NSObject

@property (copy, nonatomic) NSString *playUrl;
@property (nonatomic) BOOL isDebug;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) long long playType;
@property (nonatomic) long long playMode;
@property (nonatomic) BOOL muteAudio;
@property (nonatomic) BOOL muteVideo;
@property (nonatomic) long long renderRotation;
@property (nonatomic) long long renderMode;
@property (nonatomic) float minCache;
@property (nonatomic) float maxCache;
@property (nonatomic) BOOL enableMessage;
@property (nonatomic) BOOL needVolumeNotify;
@property (readonly, nonatomic) BOOL isRTC;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)getDiffLog:(id)a0;
- (void).cxx_destruct;

@end
