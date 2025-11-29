@class NSString;

@interface AWEPOIAwemeStatusSyncUtil : NSObject

@property (retain, nonatomic) NSString *handle;
@property (nonatomic) BOOL hasDetailVC;

- (void)didReceiveLifeStoreAwemeStatusChange:(id)a0 key:(id)a1;
- (void)didReceiveAwemeDiggStatusChange:(id)a0;
- (void)didReceiveSingleAwemeDiggStatusChange:(id)a0 withItemID:(id)a1;
- (void)handleDiggWithItemID:(id)a0 originItemID:(id)a1 isDigg:(BOOL)a2 onDiggSuccess:(id /* block */)a3 onDiggError:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
