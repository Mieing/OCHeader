@class WCTDatabase, WCTTable;

@interface MMLocationDB : NSObject

@property (retain, nonatomic) WCTDatabase *m_db;
@property (retain, nonatomic) WCTTable *m_table;

+ (long long)getIntegerNumber:(double)a0;

- (id)init;
- (id)pathForDatabase;
- (void)setupDatabase;
- (void)closeDB;
- (void)clearData;
- (void)closeDBBeforeInit;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 floorName:(id)a1 type:(long long)a2 language:(unsigned long long)a3;
- (BOOL)setAddress:(id)a0 ByLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 type:(long long)a2 languageName:(id)a3;
- (void).cxx_destruct;

@end
