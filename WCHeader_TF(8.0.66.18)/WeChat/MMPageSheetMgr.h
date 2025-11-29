@class NSString, NSMutableArray;

@interface MMPageSheetMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *pageSheetStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)addPageSheet:(id)a0 animated:(BOOL)a1;
- (void)removePageSheet:(id)a0 animated:(BOOL)a1;
- (id)findStackItem:(id)a0;
- (void)compact;
- (void)updatePageSheetOverlayStatus:(BOOL)a0;
- (id)topPageSheet;
- (void).cxx_destruct;

@end
