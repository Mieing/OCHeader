@class NSMutableDictionary;

@interface PublicWifiCache : MMObject

@property (retain, nonatomic) NSMutableDictionary *notRegisterDict;

+ (id)getInstance;

- (void)dealloc;
- (id)init;
- (void)userConfirm;
- (BOOL)shouldUserConfirm;
- (void)initDB;
- (void)closeDB;
- (void)cleanCache;
- (BOOL)saveApBase:(id)a0;
- (id)retrivalApBaseForMac:(id)a0;
- (BOOL)removeApBase:(id)a0;
- (id)retrivalApAuthForSsid:(id)a0;
- (void).cxx_destruct;

@end
