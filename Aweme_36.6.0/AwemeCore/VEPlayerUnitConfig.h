@class HTSVideoData;

@interface VEPlayerUnitConfig : NSObject <NSCopying>

@property (nonatomic) BOOL useNewModule;
@property (nonatomic) BOOL autoRepeatPlay;
@property (nonatomic) BOOL autoPlayWhenAppBecomeActive;
@property (nonatomic) BOOL shouldCheckPlayBack;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL needSeekWhenPlayerAndItemNotReady;
@property (nonatomic) unsigned int audioProcessFrameCount;
@property (nonatomic) BOOL enableMultiHighFPSPreview;
@property (nonatomic) BOOL isPreviewMode;
@property (nonatomic) BOOL enableNoAvplayer;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
