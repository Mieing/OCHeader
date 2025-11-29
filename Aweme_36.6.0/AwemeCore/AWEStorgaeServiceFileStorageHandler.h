@class NSString;
@protocol AWEStorageServiceFileStorageDelegate;

@interface AWEStorgaeServiceFileStorageHandler : AWEStorageServiceHandler

@property (weak, nonatomic) id<AWEStorageServiceFileStorageDelegate> delegate;
@property (copy, nonatomic) NSString *orginalDomain;

- (BOOL)removeFile:(id)a0 error:(id *)a1;
- (BOOL)writeObject:(id)a0 toFile:(id)a1 error:(id *)a2;
- (id)readObjectFromFile:(id)a0 error:(id *)a1;
- (BOOL)writeString:(id)a0 toFile:(id)a1 options:(id)a2 error:(id *)a3;
- (id)readStringFromFile:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)writeData:(id)a0 toFile:(id)a1 options:(id)a2 error:(id *)a3;
- (id)readDataFromFile:(id)a0 options:(id)a1 error:(id *)a2;
- (void)asyncRemoveFile:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)asyncReadDataFromFile:(id)a0 queue:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)asyncWriteData:(id)a0 toFile:(id)a1 queue:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)writeString:(id)a0 toFile:(id)a1 error:(id *)a2;
- (id)readStringFromFile:(id)a0 error:(id *)a1;
- (BOOL)writeArray:(id)a0 toFile:(id)a1 error:(id *)a2;
- (id)readArrayFromFile:(id)a0 error:(id *)a1;
- (BOOL)writeDictionary:(id)a0 toFile:(id)a1 error:(id *)a2;
- (id)readDictionaryFromFile:(id)a0 error:(id *)a1;
- (void)asyncWriteData:(id)a0 toFile:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)readDataFromFile:(id)a0 error:(id *)a1;
- (void)asyncReadDataFromFile:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDomain:(id)a0 options:(id)a1;
- (BOOL)writeArray:(id)a0 toFile:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)pathIsValid:(id)a0 error:(id *)a1;
- (BOOL)URLIsValid:(id)a0 error:(id *)a1;
- (id)readArrayFromFile:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)writeDictionary:(id)a0 toFile:(id)a1 options:(id)a2 error:(id *)a3;
- (id)readDictionaryFromFile:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)writeData:(id)a0 toPartialFile:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)writeData:(id)a0 toEntireFile:(id)a1 options:(id)a2 error:(id *)a3;
- (id)readPartialDataFrom:(id)a0 options:(id)a1 error:(id *)a2;
- (id)readEntireDataFrom:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)writeObject:(id)a0 toFile:(id)a1 options:(id)a2 error:(id *)a3;
- (id)generateErrorWithLocalizedDescription:(id)a0;
- (id)readObjectFromFile:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateErrorWithUserInfo:(id)a0;
- (BOOL)writeData:(id)a0 toPath:(id)a1 appendFromEnd:(BOOL)a2 offset:(unsigned long long)a3 error:(id *)a4;
- (id)readDataFrom:(id)a0 readToEnd:(BOOL)a1 offset:(unsigned long long)a2 lenght:(unsigned long long)a3 error:(id *)a4;
- (void).cxx_destruct;
- (BOOL)writeData:(id)a0 toFile:(id)a1 error:(id *)a2;

@end
