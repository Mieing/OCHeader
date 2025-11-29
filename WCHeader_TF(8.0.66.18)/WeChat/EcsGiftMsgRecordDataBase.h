@interface EcsGiftMsgRecordDataBase : NSObject {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ table;
}

@property (class, nonatomic, readonly) EcsGiftMsgRecordDataBase *instance;

- (id)init;
- (void)insert:(id)a0 msgLocalId:(long long)a1 userName:(id)a2 hasMsgClicked:(long long)a3 appMsgSign:(id)a4;
- (void)updateHasClicked:(id)a0 hasClicked:(long long)a1;
- (id)getEcsGiftMsgRecord:(id)a0;
- (unsigned int)getMsgLocalId:(id)a0;
- (id)getUserName:(id)a0;
- (id)getAppMsgSign:(id)a0;
- (void)delete:(id)a0;
- (long long)getHasMsgClicked:(id)a0;
- (BOOL)recordExist:(id)a0;
- (void).cxx_destruct;

@end
