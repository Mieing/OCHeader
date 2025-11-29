@class NSMapTable, NSMutableDictionary;

@interface ACCAIGCMemoryCacheManager : NSObject

@property (retain, nonatomic) NSMapTable *selectLoraPersonInfoMapTable;
@property (retain, nonatomic) NSMapTable *loraMapTable;
@property (retain, nonatomic) NSMapTable *selectloraMapTable;
@property (retain, nonatomic) NSMutableDictionary *loraInfoMemoryCache;

+ (id)sharedManager;

- (id)readSelectLoraPersonInfo;
- (void)saveSelectLoraPersonInfo:(id)a0;
- (id)selectLoraInfoKey;
- (void).cxx_destruct;
- (id)init;

@end
