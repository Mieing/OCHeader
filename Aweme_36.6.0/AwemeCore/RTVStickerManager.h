@class NSMutableDictionary, RxScheduler, RxMultipleDelegate, NSString;
@protocol RxInjector, RTVStickerManagerObserver;

@interface RTVStickerManager : NSObject <RTVStickerManagerInterface, AWEStickerDownloadManagerObserverProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSMutableDictionary *deferreds;
@property (readonly, nonatomic) RxMultipleDelegate<RTVStickerManagerObserver> *observers;
@property (readonly, nonatomic) NSMutableDictionary *effectModelAndResourceIDMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerDownloadManager:(id)a0 sticker:(id)a1 downloadProgressChange:(double)a2;
- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerDownloadManager:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)rxAwakeFromPropertyInjection;
- (void)__handleMemoryWarningNotification:(id)a0;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (id)stickerWithResourceID:(id)a0 pannelName:(id)a1;
- (id)stickerWithStickerID:(id)a0;
- (double)downloadProgressWithSticker:(id)a0;
- (id)downloadStickerIfNeeded:(id)a0;
- (id)downloadStickerIfNeededWithID:(id)a0;
- (id)__errorWithCode:(long long)a0;
- (BOOL)__stickerHadDownloaded:(id)a0;
- (BOOL)__isInvalidDownloadPathWithSticker:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
