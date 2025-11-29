@interface AWEMusicCollectionService : NSObject

+ (void)changeCollection:(id)a0 model:(id)a1 eventModel:(id)a2 completion:(id /* block */)a3;
+ (void)reportCollectionWithModel:(id)a0 eventModel:(id)a1 targetCollectionType:(unsigned long long)a2;
+ (void)changeCollectionModel:(id)a0 eventModel:(id)a1 completion:(id /* block */)a2;
+ (void)sendNotification:(id)a0;

@end
