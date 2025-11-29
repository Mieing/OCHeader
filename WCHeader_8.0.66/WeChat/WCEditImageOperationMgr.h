@class NSMutableArray;

@interface WCEditImageOperationMgr : NSObject

@property (retain, nonatomic) NSMutableArray *operations;
@property (nonatomic) long long currentIndex;

- (id)init;
- (void)addAnOperaion:(id)a0;
- (BOOL)canUndo;
- (void)undo;
- (BOOL)canRedo;
- (void)redo;
- (void)reset;
- (void)undoOperationWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
