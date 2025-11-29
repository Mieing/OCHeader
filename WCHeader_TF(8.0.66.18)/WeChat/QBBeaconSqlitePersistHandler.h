@interface QBBeaconSqlitePersistHandler : NSObject

@property (nonatomic) BOOL isGetfilesuccess;

+ (id)getDefaultHandler;

- (id)init;
- (BOOL)saveObjects:(id)a0 key:(id)a1;
- (BOOL)deleteObjects;
- (BOOL)saveObject:(id)a0 key:(id)a1;
- (BOOL)deleteObjectWithKey:(id)a0;
- (id)getObject:(id)a0;

@end
