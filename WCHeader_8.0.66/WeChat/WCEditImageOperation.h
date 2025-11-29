@interface WCEditImageOperation : NSObject

@property (copy, nonatomic) id /* block */ undoBlock;
@property (copy, nonatomic) id /* block */ redoBlock;
@property (nonatomic) unsigned long long operationType;

- (void)undo;
- (void)redo;
- (void).cxx_destruct;

@end
