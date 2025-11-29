@class QDataStoreSelectorWorldmap, NSString, QDBDatabase, QDataStoreSelectorHandDrawMap, QDataStoreSelectorWorldmapDark, QDataStoreSelectorBingWorldmap, QDataStoreSelectorCustomWorldmap;

@interface QDataCacheSql : NSObject

@property (retain, nonatomic) NSString *dbpath;
@property (retain, nonatomic) QDBDatabase *db;
@property (retain, nonatomic) QDataStoreSelectorWorldmap *worldmapNormal;
@property (retain, nonatomic) QDataStoreSelectorWorldmapDark *worldmapDark;
@property (retain, nonatomic) QDataStoreSelectorHandDrawMap *handDrawMap;
@property (retain, nonatomic) QDataStoreSelectorBingWorldmap *bingmap;
@property (retain, nonatomic) QDataStoreSelectorCustomWorldmap *customWorldmap;

+ (id)singlton;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)initData;
- (void)initTableWithName:(id)a0;
- (void)open;
- (void)close;
- (id)selectorForSourceType:(int)a0;
- (id)decryptItem:(id)a0;
- (id)encryptItem:(id)a0;
- (void)resetMapDataForSelector:(id)a0;
- (void)resetWorldMapDataForType:(int)a0;
- (void)resetHandDrawMapData;
- (BOOL)executeQuery:(id)a0;
- (BOOL)executeUpdate:(id)a0;
- (BOOL)executeInsert:(id)a0;
- (void).cxx_destruct;

@end
