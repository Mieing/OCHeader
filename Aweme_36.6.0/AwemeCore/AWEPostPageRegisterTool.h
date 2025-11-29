@class NSSet, NSMutableDictionary, NSMutableSet, NSDictionary;

@interface AWEPostPageRegisterTool : NSObject

@property (retain, nonatomic) NSMutableSet *elementSet;
@property (retain, nonatomic) NSMutableDictionary *serviceDict;
@property (retain, nonatomic) NSMutableDictionary *defaultServiceDict;
@property (retain, nonatomic) NSMutableDictionary *bindElementServiceDict;
@property (readonly, copy, nonatomic) NSSet *registeredElements;
@property (readonly, copy, nonatomic) NSDictionary *registeredServices;
@property (readonly, copy, nonatomic) NSDictionary *registeredDefaultServices;
@property (readonly, copy, nonatomic) NSDictionary *bindElementServices;

+ (id)shared;

- (void)registerElementClass:(Class)a0;
- (void)registerServiceProvider:(id /* block */)a0 forProtocol:(id)a1 bindElementClass:(Class)a2;
- (void)registerServiceProvider:(id /* block */)a0 forProtocol:(id)a1 bindElementClass:(Class)a2 isDefault:(BOOL)a3;
- (void)clearRegisteredInfo;
- (void).cxx_destruct;
- (id)init;

@end
