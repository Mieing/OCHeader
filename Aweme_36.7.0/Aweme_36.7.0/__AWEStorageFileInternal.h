@class NSString;

@interface __AWEStorageFileInternal : NSObject

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL enableSyncArchive;

+ (void)setupFile;
+ (id)storageWithDomain:(id)a0 enableAutoClean:(BOOL)a1;
+ (id)universalStorage:(BOOL)a0;
+ (BOOL)archiveErrorMessageOptimize;
+ (void)autoCleanFileWithCompletion:(id /* block */)a0;
+ (void)registerFileErrorReporter:(id /* block */)a0;

- (id)initWithDomain:(id)a0 enableAutoClean:(BOOL)a1;
- (id)initWithDomain:(id)a0 enableAutoClean:(BOOL)a1 enableSyncArchive:(BOOL)a2;
- (void)asyncReadObjectFromFileForKey:(id)a0 objClass:(Class)a1 enableAutoClean:(BOOL)a2 completion:(id /* block */)a3;
- (void)asyncWriteObject:(id)a0 toFileForKey:(id)a1 objClass:(Class)a2 enableAutoClean:(BOOL)a3 enableiCloudSync:(BOOL)a4 completion:(id /* block */)a5;
- (void)asyncReadObjectFromFileForKey:(id)a0 objClass:(Class)a1 enableAutoClean:(BOOL)a2 queueQos:(unsigned int)a3 completion:(id /* block */)a4;
- (void)asyncWriteObject:(id)a0 toFileForKey:(id)a1 objClass:(Class)a2 enableAutoClean:(BOOL)a3 enableiCloudSync:(BOOL)a4 queueQos:(unsigned int)a5 completion:(id /* block */)a6;
- (void)fileHandlerAddOne;
- (id)syncReadDataFromFileForKey:(id)a0 err:(id *)a1 compatible:(BOOL)a2 enableAutoClean:(BOOL)a3;
- (id)syncReadObjectFromFileForKey:(id)a0 err:(id *)a1 compatible:(BOOL)a2 objClass:(Class)a3 enableAutoClean:(BOOL)a4;
- (void)countMapMinusOneByKey:(id)a0;
- (id)archivedDataWithObject:(id)a0 err:(id *)a1;
- (BOOL)syncWriteData:(id)a0 toFileForKey:(id)a1 err:(id *)a2 enableAutoClean:(BOOL)a3 enableiCloudSync:(BOOL)a4;
- (BOOL)syncWriteObject:(id)a0 toFileForKey:(id)a1 err:(id *)a2 objClass:(Class)a3 enableAutoClean:(BOOL)a4 enableiCloudSync:(BOOL)a5;
- (id)pathForKey:(id)a0 createDirectory:(BOOL)a1 enableAutoClean:(BOOL)a2;
- (void)fileHandlerMinusOne;
- (void)readStringFromFileForKey:(id)a0 enableAutoClean:(BOOL)a1 completion:(id /* block */)a2;
- (void)writeString:(id)a0 toFileForKey:(id)a1 enableAutoClean:(BOOL)a2 enableiCloudSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)readArrayFromFileForKey:(id)a0 enableAutoClean:(BOOL)a1 completion:(id /* block */)a2;
- (void)writeArray:(id)a0 toFileForKey:(id)a1 enableAutoClean:(BOOL)a2 enableiCloudSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)readDictionaryFromFileForKey:(id)a0 enableAutoClean:(BOOL)a1 completion:(id /* block */)a2;
- (void)writeDictionary:(id)a0 toFileForKey:(id)a1 enableAutoClean:(BOOL)a2 enableiCloudSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)readObjectFromFileForKey:(id)a0 enableAutoClean:(BOOL)a1 completion:(id /* block */)a2;
- (void)writeObject:(id)a0 toFileForKey:(id)a1 enableAutoClean:(BOOL)a2 enableiCloudSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)readObjectFromFileForKey:(id)a0 enableAutoClean:(BOOL)a1 queueQos:(unsigned int)a2 completion:(id /* block */)a3;
- (void)writeObject:(id)a0 toFileForKey:(id)a1 enableAutoClean:(BOOL)a2 enableiCloudSync:(BOOL)a3 queueQos:(unsigned int)a4 completion:(id /* block */)a5;
- (void)readDataFromFileForKey:(id)a0 enableAutoClean:(BOOL)a1 completion:(id /* block */)a2;
- (void)writeData:(id)a0 toFileForKey:(id)a1 enableAutoClean:(BOOL)a2 enableiCloudSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)removeFileInDomainForKey:(id)a0 enableAutoClean:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeAllFileInDomainEnableAutoClean:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
