@interface BDPNewAudioControlUtil : NSObject

+ (void)postAudioInterruptNotificationInFeedSceneWithUniqueID:(id)a0 src:(long long)a1;
+ (void)setCategory:(id)a0 uniqueID:(id)a1 forceCompatible:(BOOL)a2 completion:(id /* block */)a3;
+ (void)setCategory:(id)a0 withOptions:(unsigned long long)a1 uniqueID:(id)a2 forceCompatible:(BOOL)a3 completion:(id /* block */)a4;
+ (id)adaptMultiSceneCategory:(id)a0;
+ (id)operationQueue;

@end
