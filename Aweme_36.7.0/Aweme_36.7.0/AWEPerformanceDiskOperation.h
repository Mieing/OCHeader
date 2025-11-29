@class NSString;

@interface AWEPerformanceDiskOperation : NSObject

@property (copy, nonatomic) id /* block */ cleanOperation;
@property (copy, nonatomic) id /* block */ sizeOperation;
@property (copy, nonatomic) id /* block */ downgradeOperation;
@property (copy, nonatomic) NSString *path;

- (id)initWithPath:(id)a0 cleanOperation:(id /* block */)a1 downgradeOperation:(id /* block */)a2 sizeOperation:(id /* block */)a3;
- (void).cxx_destruct;

@end
