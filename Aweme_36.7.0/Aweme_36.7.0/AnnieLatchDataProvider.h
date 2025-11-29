@class NSString;

@interface AnnieLatchDataProvider : NSObject <IESLatchJSDataProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getLatchInitJsUrl:(id)a0 channel:(id)a1;
+ (id)getLatchPrefetchJsUrl:(id)a0 bundle:(id)a1;
+ (id)urlSubstring:(id)a0 toPath:(id)a1 options:(unsigned long long)a2;

- (void)latchDataWithContainer:(id)a0 completion:(id /* block */)a1;
- (void)getJSDataWithContainer:(id)a0 sync:(BOOL)a1 completion:(id /* block */)a2;
- (id)getJSDataWithContainer:(id)a0;
- (void)getJSDataWithContainer:(id)a0 completion:(id /* block */)a1;
- (id)latchDataWithContainer:(id)a0;

@end
