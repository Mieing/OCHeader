@interface WAJSContextPlugin_TenpaySecure : WAJSContextPluginBase

@property (nonatomic) BOOL pathCreated;

- (void)tryInit;
- (void)runInTenpayThread:(id /* block */)a0;
- (id)tenpaySecureRootDir;

@end
