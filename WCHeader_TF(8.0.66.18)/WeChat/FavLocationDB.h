@class WCTDatabase, WCTTable;

@interface FavLocationDB : MMObject

@property (retain, nonatomic) WCTDatabase *m_db;
@property (retain, nonatomic) WCTTable *m_table;

- (id)init;
- (id)pathForDatabase;
- (void)setupDatabase;
- (void)closeDB;
- (void)clearData;
- (void)closeDBBeforeInit;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)setAddress:(id)a0 ByLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 ByLanguage:(id)a2;
- (void).cxx_destruct;

@end
