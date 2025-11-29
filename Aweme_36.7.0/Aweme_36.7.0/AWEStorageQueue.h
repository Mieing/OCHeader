@class AWEStorage;

@interface AWEStorageQueue : NSObject

@property (class, nonatomic) BOOL enabledQueue;

@property (readonly, nonatomic) AWEStorage *storage;

+ (void)inQueue:(id /* block */)a0;
+ (id)universalQueue;

- (void)inStorage:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;
- (id)initWithDomain:(id)a0;

@end
