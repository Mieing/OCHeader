@class NSMutableArray, GACAppCheck, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface GIDAppCheck : NSObject

@property (retain, nonatomic) GACAppCheck *appCheck;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain) NSMutableArray *prepareCompletions;
@property BOOL preparing;

+ (id)debugAppCheckProviderWithAPIKey:(id)a0;
+ (id)appAttestProvider;
+ (id)appAttestResourceName;
+ (id)appCheckUsingDebugProviderWithAPIKey:(id)a0;
+ (id)appCheckUsingAppAttestProvider;

- (void)getLimitedUseTokenWithCompletion:(id /* block */)a0;
- (id)initWithAppCheckProvider:(id)a0 userDefaults:(id)a1;
- (void)prepareForAppCheckWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isPrepared;

@end
