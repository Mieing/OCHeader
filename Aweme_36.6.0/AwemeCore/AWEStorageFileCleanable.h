@class __AWEStorageFileInternal;

@interface AWEStorageFileCleanable : NSObject {
    __AWEStorageFileInternal *_fileInternal;
}

+ (id)universalStorage;
+ (id)storageWithDomain:(id)a0;
+ (void)autoCleanFileWithCompletion:(id /* block */)a0;

- (void)readDictionaryFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeDictionary:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void)removeAllFileInDomainWithCompletion:(id /* block */)a0;
- (void)readArrayFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)removeFileInDomainForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeArray:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void)readDataFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeData:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void)readObjectFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeObject:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void)readStringFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeString:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (id)init;

@end
