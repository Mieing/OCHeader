@class NSString;

@interface FavoritesOnTopOnAuthSync : MMUserService <MMKernelExt, MMServiceProtocol>

@property (nonatomic) BOOL fOnSync;
@property (nonatomic) unsigned int topNoteOnFavor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isOnSync;
- (void)doneSync;
- (void)syncLocalOnTopItemToServer;
- (void)syncAllNotesCallback;
- (void)handleOnAuthSync:(BOOL)a0 favId:(unsigned int)a1;
- (void)onAuthOK;

@end
