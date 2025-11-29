@class LynxUIContext;

@interface LynxUIListCellContentProducer : NSObject

@property (weak, nonatomic) LynxUIContext *UIContext;
@property (readonly, nonatomic) void *listNode;
@property (nonatomic) unsigned long long operationIDCount;
@property (nonatomic) long long sign;
@property (nonatomic) BOOL needsInternalCellAppearNotification;
@property (nonatomic) BOOL needsInternalCellDisappearNotification;
@property (nonatomic) BOOL needsInternalCellPrepareForReuseNotification;

- (void)asyncRecycleLynxUI:(id)a0;
- (long long)generateOperationId;
- (void)asyncUIAtIndexPath:(long long)a0 operationID:(long long)a1;
- (void)recycleLynxUI:(id)a0;
- (void)recycleCell:(id)a0;
- (id)listView:(id)a0 cellForItemAtIndex:(long long)a1;
- (id)listView:(id)a0 updateCell:(id)a1 toItemAtIndex:(long long)a2;
- (id)uiAtIndex:(long long)a0;
- (void)asyncClearCellContent:(id)a0;
- (void)clearCellContent:(id)a0;
- (void)listView:(id)a0 enqueueCell:(id)a1;
- (void).cxx_destruct;

@end
