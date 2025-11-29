@class NSString, BDPUniqueID;

@interface BDPGameToolbarBubbleManager : NSObject <BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) id subscriber;
@property (copy, nonatomic) id /* block */ delayAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMessage;
- (void)unregisterMessage;
- (void)interfaceOrientationChangeComplete:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)handleEventShowToolbarMorePanelBubble:(id)a0;
- (void)showToolbarMorePanelBubble:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end
