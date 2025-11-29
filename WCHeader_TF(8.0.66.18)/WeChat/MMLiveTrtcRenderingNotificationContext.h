@protocol MMLiveTrtcRenderingNotificationDelegate;

@interface MMLiveTrtcRenderingNotificationContext : NSObject

@property (weak, nonatomic) id<MMLiveTrtcRenderingNotificationDelegate> micFocusPreviewDelegate;
@property (weak, nonatomic) id<MMLiveTrtcRenderingNotificationDelegate> micAudiencePreviewDelegate;
@property (weak, nonatomic) id<MMLiveTrtcRenderingNotificationDelegate> ktvSingerPreviewDelegate;

- (void)notifyRenderVideoFrame:(id)a0 userId:(id)a1 streamType:(long long)a2 byLiveTask:(id)a3;
- (void)notifyLiveCaptureDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 localRenderFlipX:(BOOL)a1 byLiveTask:(id)a2;
- (void)notifyRenderImageBuffer:(struct __CVBuffer { } *)a0 forUserId:(id)a1 byLiveTask:(id)a2;
- (BOOL)shouldSendRawNotification;
- (BOOL)shouldSendAggregatedNotification;
- (void).cxx_destruct;

@end
