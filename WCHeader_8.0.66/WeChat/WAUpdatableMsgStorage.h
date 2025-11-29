@class NSMutableDictionary;

@interface WAUpdatableMsgStorage : NSObject {
    NSMutableDictionary *_dictShareKey2Info;
}

- (id)init;
- (void)clearMemoryCache;
- (id)getUpdatableMsgInfoWithShareKey:(id)a0;
- (BOOL)insertOrUpdateUpdatableMsgInfo:(id)a0;
- (void).cxx_destruct;

@end
