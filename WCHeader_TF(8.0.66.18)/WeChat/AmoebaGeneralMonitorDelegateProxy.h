@class NSString;
@protocol AmoebaGeneralMonitorDelegate;

@interface AmoebaGeneralMonitorDelegateProxy : NSObject <AmoebaGeneralMonitorDelegate>

@property (weak, nonatomic) id<AmoebaGeneralMonitorDelegate> monitorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)monitorView:(id)a0 newExposedIds:(id)a1;
- (void)monitorView:(id)a0 newExposedCells:(id)a1;
- (void)monitorView:(id)a0 unExposedItems:(id)a1;
- (void)monitorView:(id)a0 unExposedCells:(id)a1;
- (void).cxx_destruct;

@end
