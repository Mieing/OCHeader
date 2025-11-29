@class JSContext;

@interface WALockItem : NSObject

@property (nonatomic) unsigned int itemId;
@property (nonatomic) BOOL writeLock;
@property (nonatomic) unsigned int block;
@property (retain, nonatomic) JSContext *context;
@property (nonatomic) unsigned int workerId;

- (void).cxx_destruct;

@end
