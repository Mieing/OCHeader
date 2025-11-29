@class NSString;

@interface WAAppMgr : MMUserService <PBMessageObserverDelegate, IMMLanguageMgrExt, MMServiceProtocol>

@property (nonatomic) unsigned int lastUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
