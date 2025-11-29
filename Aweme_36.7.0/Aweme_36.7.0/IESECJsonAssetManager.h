@class NSString, NSArray, NSMutableDictionary;

@interface IESECJsonAssetManager : IESECAssetsManager

@property (retain, nonatomic) NSString *assetsPath;
@property (retain, nonatomic) NSArray *fileTables;
@property (retain, nonatomic) NSMutableDictionary *contentTables;

- (id)initWithBundle:(id)a0 type:(id)a1;
- (id)genFileTables;
- (id)contentOfFileName:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
