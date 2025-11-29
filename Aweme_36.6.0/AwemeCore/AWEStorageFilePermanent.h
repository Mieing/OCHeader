@class __AWEStorageFileInternal;

@interface AWEStorageFilePermanent : NSObject {
    __AWEStorageFileInternal *_fileInternal;
}

+ (id)universalStorage;
+ (id)storageWithDomain:(id)a0;
+ (id)feedRestorationStorageFilePermanent;
+ (id)firendsStorageFilePermanent;

- (void)readDictionaryFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (id)initWithDomain:(id)a0 enableSyncArchive:(BOOL)a1;
- (void)writeDictionary:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void)removeAllFileInDomainWithCompletion:(id /* block */)a0;
- (void)readArrayFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)removeFileInDomainForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeArray:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void)readDataFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeData:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void)readObjectFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeObject:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (id)friendsFeedHistoryCacheListStorageKeyWithUserID:(id)a0;
- (id)friendsInteractionInfoDictionaryStorageKeyWithUserID:(id)a0;
- (id)friendsFeedDisasterRecoveryCacheStorageKeyWithUserID:(id)a0;
- (void)setFriendsFeedHistoryCacheListWithUserID:(id)a0 cacheList:(id)a1 completion:(id /* block */)a2;
- (void)getFriendsFeedHistoryCacheListWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)removeFriendsFeedHistoryCacheListForUserID:(id)a0 completion:(id /* block */)a1;
- (void)setFriendsInfoDictionaryWithUserID:(id)a0 infoDict:(id)a1 completion:(id /* block */)a2;
- (void)getFriendsInfoDictionaryWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)removeFriendsInfoDictionaryWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)setFriendsFeedDisasterRecoveryListWithUserID:(id)a0 cacheList:(id)a1 completion:(id /* block */)a2;
- (void)getFriendsFeedDisasterRecoveryListWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)removeFriendsFeedDisasterRecoveryListForUserID:(id)a0 completion:(id /* block */)a1;
- (void)readObjectFromFileForKey:(id)a0 queueQos:(unsigned int)a1 completion:(id /* block */)a2;
- (void)readStringFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (void)writeString:(id)a0 toFileForKey:(id)a1 completion:(id /* block */)a2;
- (void)writeObject:(id)a0 toFileForKey:(id)a1 queueQos:(unsigned int)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (id)init;

@end
