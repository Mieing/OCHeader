@class NSString, RelaxEngineProxy;

@interface RelaxListNodeInfoFetcher : NSObject <ListNodeInfoFetcherProtocol> {
    RelaxEngineProxy *relaxEngineProxy_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollByListContainer:(int)a0 x:(float)a1 y:(float)a2 originalX:(float)a3 originalY:(float)a4;
- (void)scrollToPosition:(int)a0 position:(int)a1 offset:(float)a2 align:(int)a3 smooth:(BOOL)a4;
- (void)scrollStopped:(int)a0;
- (id)initWithEngineProxy:(id)a0;
- (void).cxx_destruct;

@end
