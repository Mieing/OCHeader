@class NSMapTable;

@interface BDLOCNativeAppMorePanelDelegateRegistry : NSObject

@property (retain, nonatomic) NSMapTable *delegates;

- (void)app:(id)a0 willShowMorePanelWithOriginItems:(id)a1;
- (id)delegateForApp:(id)a0;
- (void)registerDelegate:(id)a0 forApp:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
