@class NSString;

@interface IESIMByteSyncService : HTSService <IESIMByteSyncService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerBusinessId:(int)a0 handleMessageBlock:(id /* block */)a1;

@end
