@class NSString, IESLiveGiftPanelDataSharing, UIView, NSNumber, NSMutableArray;
@protocol IESHYContainerProtocol, IESLiveGiftModuleRecipientRouter;

@interface IESLiveComfortableDSViewModel : NSObject <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) NSNumber *currentEffectiveHeight;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (nonatomic) BOOL isFirstLoadDuringPanelOpen;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) id /* block */ viewFrameChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)unsubscribeEvent;
- (void)subscribeEvent;
- (void)loadHybridContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pageInitialData;
- (BOOL)enableShowComfortableDS;
- (id)initWithDataSharing:(id)a0;
- (void)updateComfortableDS:(BOOL)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
