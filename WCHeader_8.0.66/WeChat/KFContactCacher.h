@class NSString, NSMutableDictionary, WCTDatabase, WCTTable, KFContact;

@interface KFContactCacher : NSObject {
    WCTTable *_table;
    NSString *_brandUsrName;
    NSMutableDictionary *_dictOpenId2KFContact;
    WCTDatabase *_db;
    KFContact *_bindKF;
}

- (id)initWithBrandUsrName:(id)a0 withDB:(id)a1;
- (void)addOrUpdateKFContact:(id)a0;
- (void)addOrUpdateKFContactList:(id)a0;
- (void)deleteKFContact:(id)a0;
- (void)deleteAllKFContacts;
- (id)getKFContact:(id)a0 andGetIsContactNeedUpdate:(BOOL *)a1;
- (void)modifyHeadImgUpdateFlag:(id)a0 isNeedUpdate:(BOOL)a1;
- (id)getBindKFContact;
- (void)updateBindKFContact:(id)a0;
- (id)pathForBindKFContact;
- (id)tableName;
- (void)setHeadImgUpdateFlag:(id)a0 oldContact:(id)a1;
- (BOOL)isNeedUpdateKFContactInfo:(id)a0;
- (void).cxx_destruct;

@end
