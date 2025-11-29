@class NSLock, NSMutableDictionary, NSString;

@interface IESLLVIRUnitDefaultManager : NSObject <IESLLVIRUnitManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *unitMap;
@property (retain, nonatomic) NSLock *unitLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerUnit:(id /* block */)a0 withKey:(id)a1;
- (void)removeUnitWithKey:(id)a0;
- (BOOL)executeWithKey:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
