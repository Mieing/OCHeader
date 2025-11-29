@class HTSLiveGiftStruct, IESLiveGiftPanelMostlyUsedService, IESLiveGiftPanelDataSharing;
@protocol IESLiveCompoundSubscription, IESLiveSubscription;

@interface IESLiveGiftMostlyUsedButtonViewModel : NSObject

@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL mostlyUsed;
@property (retain, nonatomic) HTSLiveGiftStruct *gift;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveGiftPanelMostlyUsedService *service;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLiveSubscription> giftDisposable;
@property (copy, nonatomic) id /* block */ didClickItem;

- (void)trackShowEvent;
- (id)commonTrackParams:(id)a0;
- (void)bindViewModel;
- (void)trackClickEvent;
- (id)initWithDataSharing:(id)a0;
- (void)switchGiftMostlyUsedStatus:(id)a0;
- (void).cxx_destruct;

@end
