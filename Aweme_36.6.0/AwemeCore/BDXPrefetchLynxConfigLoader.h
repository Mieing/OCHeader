@class NSString;

@interface BDXPrefetchLynxConfigLoader : NSObject <BDXPrefetchConfigLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferData:(id)a0 schema:(id)a1 fromType:(unsigned long long)a2 resFrom:(id)a3 beginTime:(double)a4 completion:(id /* block */)a5;
- (void)configWithSchema:(id)a0 config:(id)a1 completion:(id /* block */)a2;

@end
