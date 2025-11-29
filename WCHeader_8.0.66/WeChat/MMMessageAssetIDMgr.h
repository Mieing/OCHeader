@class WCTDatabase, NSString, WCTTable;

@interface MMMessageAssetIDMgr : MMUserService <IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *table;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extTableName:(id)a0;
+ (id)md5StringFromUserName:(id)a0;

- (void)onServiceInit;
- (void)setMessageSvrID:(long long)a0 chatName:(id)a1 forAssetID:(id)a2;
- (id)assetIDForMessageSvrID:(long long)a0;
- (void)deleteItemWithMessageSvrID:(long long)a0;
- (void)deleteItemsWithChatName:(id)a0;
- (void)setDidSaveHDToAlbum:(id)a0;
- (void)setDidSaveMiddleToAlbum:(id)a0;
- (id)getExtItem:(id)a0;
- (void)deleteExtItemWithMessageLocalID:(unsigned int)a0 chatName:(id)a1;
- (void)deleteExtItemsWithChatName:(id)a0;
- (id)getDBPath;
- (id)extTable:(id)a0;
- (void)OnMsgSendSuccess:(id)a0;
- (void).cxx_destruct;

@end
