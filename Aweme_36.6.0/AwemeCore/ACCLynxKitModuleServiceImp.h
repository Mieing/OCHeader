@class NSString;

@interface ACCLynxKitModuleServiceImp : NSObject <ACCLynxKitModuleServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonProps;
- (id)bizGlobalPropsWithSchema:(id)a0;

@end
