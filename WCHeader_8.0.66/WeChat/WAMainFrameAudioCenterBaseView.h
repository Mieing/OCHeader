@class TingTapePlayingInfo;
@protocol WAMainFrameAudioCenterDelegate;

@interface WAMainFrameAudioCenterBaseView : UIView

@property (weak, nonatomic) id<WAMainFrameAudioCenterDelegate> delegate;
@property (retain, nonatomic) TingTapePlayingInfo *curPlayingInfo;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) unsigned int uiVersion;

+ (long long)syncVersion2Report:(int)a0;

- (double)contentHeight;
- (void)onBecomeUnVisible;
- (void)onBecomeVisible;
- (void)tryShowFirstTask;
- (void)willBecomeVisible;
- (void)reportTaskBarAction:(long long)a0;
- (int)taskBarVersion;
- (void).cxx_destruct;

@end
