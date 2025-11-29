@interface BDPasteboardPolicyManager : NSObject

@property (copy, nonatomic) id /* block */ enableReadBlock;
@property (copy, nonatomic) id /* block */ enableWriteBlock;
@property (copy, nonatomic) id /* block */ readBlock;
@property (copy, nonatomic) id /* block */ writeBlock;

+ (BOOL)enablePasteboardDevSuiteForRead;
+ (id)readWithAPI:(SEL)a0 containsDataAPI:(SEL)a1 pasteboardType:(id)a2 inItemSet:(id)a3 cert:(id)a4 error:(id *)a5;
+ (BOOL)enablePasteboardDevSuiteForWrite;
+ (void)writeWithAPI:(SEL)a0 setValue:(id)a1 pasteboardType:(id)a2 options:(id)a3 cert:(id)a4 error:(id *)a5;
+ (void)registerEnablePasteboardDevSuiteForReadBlock:(id /* block */)a0;
+ (void)registerEnablePasteboardDevSuiteForWriteBlock:(id /* block */)a0;
+ (void)registerReadBlock:(id /* block */)a0;
+ (id)sharedInstance;
+ (void)registerWriteBlock:(id /* block */)a0;

- (void).cxx_destruct;

@end
