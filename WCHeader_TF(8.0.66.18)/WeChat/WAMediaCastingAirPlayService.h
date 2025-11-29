@class WAMediaCastingAirPlayDetector, NSString;
@protocol WAMediaCastingAirPlayServiceDelegate;

@interface WAMediaCastingAirPlayService : NSObject <WAMediaCastingAirPlayDetectorDelegate>

@property (retain, nonatomic) WAMediaCastingAirPlayDetector *detector;
@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) unsigned long long wirelessType;
@property (weak, nonatomic) id<WAMediaCastingAirPlayServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)service;

- (id)volumeView;
- (void)start;
- (void)switchDevice;
- (void)exit;
- (void)showRoutePickerView;
- (void)onWAMediaCastingAirPlayDetector:(id)a0 wirelessRouteActiveDidChange:(BOOL)a1;
- (void).cxx_destruct;

@end
