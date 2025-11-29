@class MPVolumeView, WAMediaCastingAirPlayDectectPrivateWindow;
@protocol WAMediaCastingAirPlayDetectorDelegate;

@interface WAMediaCastingAirPlayDetector : NSObject

@property (retain, nonatomic) WAMediaCastingAirPlayDectectPrivateWindow *dectectWindow;
@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) unsigned long long wirelessType;
@property (weak, nonatomic) id<WAMediaCastingAirPlayDetectorDelegate> delegate;
@property (readonly, nonatomic) MPVolumeView *volumeView;

+ (id)format_WirelessTypeString:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void)onWirelessRouteActiveDidChange;
- (void).cxx_destruct;

@end
