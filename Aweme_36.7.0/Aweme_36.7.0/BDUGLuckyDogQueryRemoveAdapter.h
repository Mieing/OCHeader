@class NSSet, NSMutableArray, NSString;

@interface BDUGLuckyDogQueryRemoveAdapter : NSObject <BDUGLuckyDogQueryRemoveProtocol>

@property (copy, nonatomic) NSSet *removeQuerySet;
@property (nonatomic) BOOL needUpdateRemoveQuerySet;
@property (retain, nonatomic) NSMutableArray *extraProviders;
@property (nonatomic) BOOL enableQueryRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onAppSettingsUpdated;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (id)urlStringAfterQueryRemoveWithURLString:(id)a0;
- (void)addExtraQueryProvider:(id /* block */)a0;
- (void)updateRemoveQuerySet;
- (id)__removeQuerySetForURLString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
