@class NSMutableArray;

@interface ACCBlockSequencer : NSObject

@property (retain, nonatomic) NSMutableArray *blocks;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ errorBlock;

+ (id)sequencerWithBlock:(id /* block */)a0;

- (void)runWithResult:(id)a0;
- (id)completion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)then:(id /* block */)a0;
- (id)init;
- (void)stop;
- (void)run;
- (void)dealloc;
- (id)error:(id /* block */)a0;

@end
