@class NSString;

@interface BmfVqscoreLiveOC : NSObject <IBmfVqscoreLiveOC>

@property void *impl_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0 :(int)a1 :(int)a2;
- (int)processTexture:(id)a0;
- (float)getVqscoreResult;
- (int)process:(struct __CVBuffer { } *)a0;
- (void)dealloc;

@end
