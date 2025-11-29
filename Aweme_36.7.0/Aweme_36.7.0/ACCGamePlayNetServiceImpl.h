@class NSString;

@interface ACCGamePlayNetServiceImpl : NSObject <GPNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uploadWithModel:(id /* block */)a0 progress:(id *)a1 completion:(id /* block */)a2;
- (id)defaultDomain;
- (id)currentLanguage;

@end
