@class NSString;
@protocol WCFinderTaskWrapperDelegate;

@interface WCFinderTaskWrapper : NSObject <WCFinderTaskWrapperComplete>

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ prepareBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ cancelOrFinshBlock;
@property (copy, nonatomic) id /* block */ runningBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) id waitParsingDepend;
@property (nonatomic) long long tag;
@property (nonatomic) long long status;
@property (weak, nonatomic) WCFinderTaskWrapper *depend;
@property (retain, nonatomic) id next;
@property (nonatomic) BOOL bAllowConcurrent;
@property (weak, nonatomic) id<WCFinderTaskWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new:(id)a0;

- (id)initWithName:(id)a0;
- (id)init;
- (id)onPrepare:(id /* block */)a0;
- (id)onCancel:(id /* block */)a0;
- (id)onRunning:(id /* block */)a0;
- (id)onFinishOrCancel:(id /* block */)a0;
- (id)onFinish:(id /* block */)a0;
- (id)configTag:(long long)a0;
- (id)configAllowConcurrent:(BOOL)a0;
- (id)configDepend:(id)a0;
- (void)removeNext:(id)a0;
- (id)mutArrayNexts;
- (void)insertNext:(id)a0;
- (id)swapNext;
- (void)cleanNext;
- (void)performRun:(id)a0 delegate:(id)a1;
- (void)cancel;
- (void)complete:(id /* block */)a0;
- (void)_fullFilled:(id /* block */)a0;
- (void)_wakeByDepend:(id)a0;
- (void).cxx_destruct;

@end
