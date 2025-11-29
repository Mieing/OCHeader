@class NSNumber;

@interface AWEMVVolumeStrategyController : AWEDCFeedBaseController

@property (retain, nonatomic) NSNumber *volumeHandlerID;

- (BOOL)getMVChannelMuteState;
- (void)saveMVChannelMuteState:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
