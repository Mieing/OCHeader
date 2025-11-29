@class NSString, NSMutableDictionary;

@interface AWEECSearchSuggestWordsPitaya : NSObject <AWEECSearchPitayaTraitHubProtocol>

@property (retain, nonatomic) NSMutableDictionary *traitHub;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPitayaMessageHandler;
+ (void)registerPitayaBusiness:(id)a0 toHandler:(id)a1;
+ (void)setupPitayaBusinessToEventMap;
+ (id)sharedInstance;

- (id)paramsForKey:(id)a0;
- (void).cxx_destruct;

@end
