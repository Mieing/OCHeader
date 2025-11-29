@class NSString;
@protocol GACAppCheckAPIServiceProtocol;

@interface GACAppCheckDebugProviderAPIService : NSObject <GACAppCheckDebugProviderAPIServiceProtocol>

@property (readonly, nonatomic) id<GACAppCheckAPIServiceProtocol> APIService;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAPIService:(id)a0 resourceName:(id)a1;
- (id)appCheckTokenWithDebugToken:(id)a0 limitedUse:(BOOL)a1;
- (id)HTTPBodyWithDebugToken:(id)a0 limitedUse:(BOOL)a1;
- (void).cxx_destruct;
- (id)backgroundQueue;

@end
