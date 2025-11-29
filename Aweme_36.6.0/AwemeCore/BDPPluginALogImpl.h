@class NSString;

@interface BDPPluginALogImpl : NSObject <BDPLogPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)setALogWithFileName:(id)a0 funcName:(id)a1 tag:(id)a2 line:(int)a3 level:(int)a4 format:(id)a5;
+ (id)sharedPlugin;
+ (int)levelMap:(int)a0;
+ (id)p_convertVectorToArray:(struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; })a0;

- (void)bdp_logWithModel:(id)a0;
- (id)bdp_getAllAlogFilePaths;

@end
