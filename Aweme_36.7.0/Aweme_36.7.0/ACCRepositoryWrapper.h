@class NSDictionary, NSMutableDictionary, NSString;

@interface ACCRepositoryWrapper : NSObject <ACCPublishRepository, NSCopying>

@property (retain, nonatomic) NSMutableDictionary *registerNodeInfoHash;
@property (retain, nonatomic) NSMutableDictionary *extensionModels;
@property (readonly, nonatomic) NSDictionary *registerNodeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtensionModelByClass:(id)a0;
- (id)extensionModelOfClass:(Class)a0;
- (id)extensionModelOfProtocol:(id)a0;
- (void)enumerateExtensionModels:(BOOL)a0 requireProtocol:(id)a1 requireSelector:(SEL)a2 block:(id /* block */)a3;
- (void)removeExtensionModel:(Class)a0;
- (id)deepCopyExtensionModels;
- (id)parentRepository;
- (void)setupRegisteredRepositoryElements;
- (id)childRepositoryList;
- (void)insertRegisterInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
