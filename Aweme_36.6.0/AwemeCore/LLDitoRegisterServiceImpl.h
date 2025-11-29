@class NSDictionary, NSMutableDictionary, NSString;

@interface LLDitoRegisterServiceImpl : NSObject <LLDitoRegisterServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *registeredComponentDict;
@property (copy, nonatomic) id /* block */ globalComponentRegister;
@property (readonly, nonatomic) NSDictionary *globalComponentMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerDitoContainerAgent:(id)a0 componentSubtype:(id)a1;
- (void)unregisterComponentWithSubtype:(id)a0;
- (void).cxx_destruct;

@end
