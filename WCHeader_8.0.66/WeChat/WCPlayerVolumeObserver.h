@class MPVolumeView;
@protocol WCPlayerVolumeObserverDelegate;

@interface WCPlayerVolumeObserver : NSObject

@property (retain, nonatomic) MPVolumeView *volumeView;
@property (weak, nonatomic) id<WCPlayerVolumeObserverDelegate> delegate;
@property (nonatomic) BOOL showSystemVolumeView;

- (void)dealloc;
- (void)stopObserveVolumeChangeEvent;
- (void)startObserveVolumeChangeEvent;
- (void)onSystemVolumeDidChange:(id)a0;
- (float)volume;
- (void).cxx_destruct;

@end
