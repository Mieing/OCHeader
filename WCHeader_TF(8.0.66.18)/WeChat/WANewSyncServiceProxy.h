@class NSString;

@interface WANewSyncServiceProxy : NSObject <IWANewSyncService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)StartOplog:(unsigned int)a0 Oplog:(id)a1;


@end
