@class NSString, NSMutableDictionary;
@protocol IESLiveAudioCacheProvider;

@interface IESLiveAudioDownloader : NSObject <IESLiveAudioDownloaderProvider>

@property (retain, nonatomic) NSMutableDictionary *downloadingItems;
@property (retain, nonatomic) id<IESLiveAudioCacheProvider> audioCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadAudioWith:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)cancelAll;

@end
