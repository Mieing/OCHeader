@interface BioAuthFacade : NSObject

@property (retain, nonatomic) id cls;

+ (id)getBioMetaInfo;
+ (void)preLoad;

- (void)exec:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void)authWithRequest:(id)a0 withCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)version;
- (BOOL)isBusy;

@end
