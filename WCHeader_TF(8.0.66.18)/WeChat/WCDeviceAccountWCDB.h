@class WCTDatabase, WCTTable;

@interface WCDeviceAccountWCDB : MMObject

@property (retain, nonatomic) WCTDatabase *m_db;
@property (retain, nonatomic) WCTTable *m_tableAccount;
@property (retain, nonatomic) WCTTable *m_tableAirKiss;

- (BOOL)setupDB;
- (id)getDeviceBrandAccountWCDBPath;
- (id)getAllDeviceInfosInAccount;
- (unsigned int)getCountOfDeviceInfosInAccountForUser:(id)a0;
- (id)getAllDeviceInfosInAccountForUser:(id)a0;
- (id)getDeviceInfoInAccountForUser:(id)a0 AndDeviceId:(id)a1;
- (id)getDeviceInfoInAccountForMd5Str:(id)a0;
- (id)getDeviceInfoInAccountForDID:(long long)a0;
- (BOOL)insertOrUpdateDeviceInfoInAccount:(id)a0;
- (void)delDeviceInfosInAccountForUser:(id)a0;
- (void)delDeviceInfoInAccountForUser:(id)a0 AndDeviceId:(id)a1;
- (id)getDataInAirKissForKey:(id)a0;
- (BOOL)insertOrUpdateInAirKissForKey:(id)a0 WithData:(id)a1;
- (void).cxx_destruct;

@end
