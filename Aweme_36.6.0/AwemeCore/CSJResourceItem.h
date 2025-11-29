@class NSString, NSError;

@interface CSJResourceItem : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *dirName;
@property (copy, nonatomic) NSString *fileFullPath;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *extenionName;
@property (copy, nonatomic) id /* block */ loadSuccess;
@property (retain, nonatomic) NSError *loadError;

+ (id)itemWithUrlString:(id)a0 dirName:(id)a1;
+ (id)itemWithUrlString:(id)a0;

- (id)suffixFilePath;
- (id)fileFullPathWithDirPath:(id)a0;
- (id)key;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
