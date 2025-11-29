@class NSString;

@interface WeVisResourceManager : IUdrBizFeature <IWeVisResourceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)UDRProjectId;
+ (id)resourceForKey:(id)a0;
+ (id)postPathOfResource:(id)a0;
+ (id)pathOfResource:(id)a0;
+ (id)modelFilePathForKey:(id)a0;
+ (BOOL)checkModelFileExistsForKeys:(id)a0;
+ (id)debugDescription;

- (id)init;
- (id)getProjectId;
- (BOOL)addToPeriod;
- (id)getParameter;
- (void)postProcess:(id)a0;
- (void)haveSpecifiedResource:(id)a0 name:(id)a1 version:(unsigned int)a2 errNo:(int)a3 errCode:(int)a4;
- (id)modelFilePathForKey:(id)a0;

@end
