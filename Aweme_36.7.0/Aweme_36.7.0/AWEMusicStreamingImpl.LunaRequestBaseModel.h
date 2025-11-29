@interface AWEMusicStreamingImpl.LunaRequestBaseModel : NSObject

- (Class)responseModelClass;
- (BOOL)needJsonResponse;
- (id)fromJsonResponse:(id)a0;
- (id)init;
- (id)params;
- (id)method;
- (id)path;

@end
