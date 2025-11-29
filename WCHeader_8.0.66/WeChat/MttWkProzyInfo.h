@class NSString;

@interface MttWkProzyInfo : NSObject

@property (retain, nonatomic) NSString *phoneID;
@property (nonatomic) BOOL is64os;
@property (retain, nonatomic) NSString *segName;
@property (retain, nonatomic) NSString *segtionName;
@property (nonatomic) long long offset;
@property (retain, nonatomic) NSString *rootMemory;
@property (nonatomic) long long checkOffset;
@property (retain, nonatomic) NSString *checkClass;
@property (retain, nonatomic) NSString *checkMethod;

+ (id)infoWithDictionary:(id)a0;
+ (id)filePath;
+ (id)preloadFilePathWithName:(id)a0;
+ (id)prozyInfoWithFilePath:(id)a0;
+ (id)prozyInfoFromFile;
+ (id)preloadProzyInfosFromFile;
+ (void)savePreloadItems:(id)a0;
+ (void)removePreloadItems;

- (id)toDictionary;
- (void)saveToFile:(id)a0 completion:(id /* block */)a1;
- (void)saveToFileWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
