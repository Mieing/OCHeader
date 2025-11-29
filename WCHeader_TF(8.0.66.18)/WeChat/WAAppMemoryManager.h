@class NSString;

@interface WAAppMemoryManager : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportWeAppStorageStatus:(id)a0 appVersion:(unsigned long long)a1 appState:(unsigned long long)a2;


@end
