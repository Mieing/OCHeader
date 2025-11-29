@class NSMutableArray;
@protocol TTVideoEngineFragment;

@interface TTVideoEngineFragmentLoader : NSObject

@property (retain, nonatomic) NSMutableArray<TTVideoEngineFragment> *fragments;

- (void)videoEngineDidCallPlay:(id)a0;
- (void)videoEngineDidPrepared:(id)a0;
- (void)videoEngineDidReset:(id)a0;
- (void)videoEngineDidInit:(id)a0;
- (void)loadFragmentWithList:(id)a0 engine:(id)a1;
- (void)unLoadFragment;
- (void).cxx_destruct;

@end
