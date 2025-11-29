@class CSJMaterialMeta, NSString, CSJVideoAdTracker, CSJAdSlot;

@interface CSJVideoAdReportor : NSObject <CSJVideoAdReportor>

@property (copy, nonatomic) NSString *slotId;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (nonatomic) long long drawVideoType;
@property (nonatomic) double duration;
@property (nonatomic) double currentTimeStamp;
@property (retain, nonatomic) CSJVideoAdTracker *videoTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackTag;
- (id)initWithNativeAd:(id)a0;
- (void)startPlayVideo;
- (void)reportLabel:(id)a0 adExtraDataType:(long long)a1 duration:(double)a2 watchedDuration:(double)a3 error:(id)a4;
- (id)getAdExtraDataDict:(long long)a0 duration:(double)a1 watchedDuration:(double)a2 error:(id)a3;
- (void)didStartPlayVideoWithVideoDuration:(double)a0;
- (void)didAutoStartPlayWithVideoDuration:(double)a0;
- (void)didFinishVideo;
- (void)didPauseVideoWithCurrentDuration:(double)a0;
- (void)didResumeVideoWithCurrentDuration:(double)a0;
- (void)didBreakVideoWithCurrentDuration:(double)a0;
- (void)didClickVideoViewWithCurrentDuration:(double)a0;
- (void)didPlayFailedWithError:(id)a0;
- (void)didPlayStartFailedWithError:(id)a0;
- (void)didPlayBufferStart;
- (void)didPlayBufferEnd;
- (void).cxx_destruct;

@end
