@class IESLiveGiftPanelMostlyUsedService, RACReplaySubject, IESLiveGiftPanelDataSharing, RACSignal, RACCompoundDisposable;

@interface IESLiveGiftMostlyUsedListHeaderViewModel : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL pin;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveGiftPanelMostlyUsedService *service;
@property (retain, nonatomic) RACReplaySubject *pinSubject;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (readonly, nonatomic) RACSignal *pinSignal;

- (id)commonTrackParams:(id)a0;
- (void)trackClickEvent;
- (void)bindService;
- (id)initWithDataSharing:(id)a0;
- (void)switchPinStatus:(BOOL)a0;
- (void)trackIntroduceClick;
- (void).cxx_destruct;
- (void)dealloc;

@end
