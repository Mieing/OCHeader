@class NSString, RxPromise, NSMutableArray;
@protocol RTVStorageArea, RxInjector, RTVInteractionConfigureManagerInterface, AWEIMEmoticonDataManagerProtocol;

@interface __RTVEmoticonDataManager : NSObject <RTVEmoticonDataManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<AWEIMEmoticonDataManagerProtocol> emoticonDataManager;
@property (readonly, nonatomic) id<RTVStorageArea> storageArea;
@property (retain, nonatomic) RxPromise *recentlyUsedDynamicEmoticonPersistencePromise;
@property (retain, nonatomic) NSMutableArray *recentLyUsedDynamicEmoticonCache;
@property (retain, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)matchEmoticonToYYTextAttachmentForAttributedString:(id)a0 font:(id)a1;
- (id)plainTextForAttributedString:(id)a0;
- (void)lazyDownloadSpecialResourceName:(id)a0 complete:(id /* block */)a1;
- (id)dynamicEmoticonThemeModel;
- (id)__sortedDynamicEmoticonThemeModelWithRecentlyUsedEmoticons:(id)a0 themeModel:(id)a1;
- (long long)__storedMaxCountOfRecentlyUsedDynamicEmoticon;
- (id)staticStickerPathForSticker:(id)a0;
- (id)animateStickerPathForSticker:(id)a0;
- (id)effectEmojiResourcePathForEmoticon:(id)a0;
- (void)notifyDynamicEmoticonBeUsed:(id)a0;
- (id)dynamicEmoticonThemeModelWithSortedByRecentlyUsedEmoticons:(BOOL)a0;
- (void).cxx_destruct;

@end
