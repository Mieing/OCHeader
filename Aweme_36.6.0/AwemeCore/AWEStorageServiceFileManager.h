@class NSFileManager;

@interface AWEStorageServiceFileManager : NSObject {
    NSFileManager *_defaultManager;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (id)init;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)currentDirectoryPath;
- (BOOL)fileExistsAtPath:(id)a0;
- (BOOL)fileExistsAtPath:(id)a0 isDirectory:(BOOL *)a1;
- (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)createDirectoryAtPath:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (BOOL)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (id)URLForDirectory:(unsigned long long)a0 inDomain:(unsigned long long)a1 appropriateForURL:(id)a2 create:(BOOL)a3 error:(id *)a4;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)a0 options:(unsigned long long)a1;
- (id)enumeratorAtURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;
- (id)contentsOfDirectoryAtURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)URLsForDirectory:(unsigned long long)a0 inDomains:(unsigned long long)a1;
- (BOOL)getRelationship:(long long *)a0 ofDirectoryAtURL:(id)a1 toItemAtURL:(id)a2 error:(id *)a3;
- (BOOL)getRelationship:(long long *)a0 ofDirectory:(unsigned long long)a1 inDomain:(unsigned long long)a2 toItemAtURL:(id)a3 error:(id *)a4;
- (BOOL)changeCurrentDirectoryPath:(id)a0;
- (id)fileAttributesAtPath:(id)a0 traverseLink:(BOOL)a1;
- (BOOL)changeFileAttributes:(id)a0 atPath:(id)a1;
- (BOOL)isReadableFileAtPath:(id)a0;
- (BOOL)isWritableFileAtPath:(id)a0;
- (BOOL)isExecutableFileAtPath:(id)a0;
- (BOOL)isDeletableFileAtPath:(id)a0;
- (id)displayNameAtPath:(id)a0;
- (id)directoryContentsAtPath:(id)a0;
- (id)enumeratorAtPath:(id)a0;
- (id)subpathsAtPath:(id)a0;
- (BOOL)createDirectoryAtPath:(id)a0 attributes:(id)a1;
- (id)pathContentOfSymbolicLinkAtPath:(id)a0;
- (BOOL)createSymbolicLinkAtPath:(id)a0 pathContent:(id)a1;
- (id)contentsAtPath:(id)a0;
- (BOOL)contentsEqualAtPath:(id)a0 andPath:(id)a1;
- (id)fileSystemAttributesAtPath:(id)a0;
- (const char *)fileSystemRepresentationWithPath:(id)a0;
- (id)stringWithFileSystemRepresentation:(const char *)a0 length:(unsigned long long)a1;
- (id)componentsToDisplayForPath:(id)a0;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)linkItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)linkItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)trashItemAtURL:(id)a0 resultingItemURL:(id *)a1 error:(id *)a2;
- (BOOL)setAttributes:(id)a0 ofItemAtPath:(id)a1 error:(id *)a2;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (id)subpathsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)attributesOfFileSystemForPath:(id)a0 error:(id *)a1;
- (BOOL)createSymbolicLinkAtPath:(id)a0 withDestinationPath:(id)a1 error:(id *)a2;
- (BOOL)createSymbolicLinkAtURL:(id)a0 withDestinationURL:(id)a1 error:(id *)a2;
- (id)destinationOfSymbolicLinkAtPath:(id)a0 error:(id *)a1;
- (BOOL)replaceItemAtURL:(id)a0 withItemAtURL:(id)a1 backupItemName:(id)a2 options:(unsigned long long)a3 resultingItemURL:(id *)a4 error:(id *)a5;
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)a0 error:(id *)a1;
- (BOOL)setUbiquitous:(BOOL)a0 itemAtURL:(id)a1 destinationURL:(id)a2 error:(id *)a3;
- (BOOL)isUbiquitousItemAtURL:(id)a0;
- (BOOL)evictUbiquitousItemAtURL:(id)a0 error:(id *)a1;
- (id)URLForUbiquityContainerIdentifier:(id)a0;
- (id)URLForPublishingUbiquitousItemAtURL:(id)a0 expirationDate:(id *)a1 error:(id *)a2;
- (id)ubiquityIdentityToken;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)a0;
- (void)getFileProviderServicesForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end
