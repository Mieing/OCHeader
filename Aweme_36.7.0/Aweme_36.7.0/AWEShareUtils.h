@class NSString;

@interface AWEShareUtils : NSObject <AWEShareUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPlatformAvailable:(long long)a0;
+ (BOOL)isPlatformInstalled:(long long)a0;
+ (BOOL)openAppWithPlatform:(long long)a0;
+ (void)openAppWithPlatform:(long long)a0 completion:(id /* block */)a1;
+ (BOOL)isDisplayingSharePanel;
+ (void)shortenURL:(id)a0 persistent:(BOOL)a1 completion:(id /* block */)a2;
+ (void)shortenURLWithContext:(id)a0 outExtraParams:(id)a1 persistent:(BOOL)a2 completion:(id /* block */)a3;
+ (id)linkStringFormatWithSplitWord:(id)a0 description:(id)a1 urlString:(id)a2;
+ (BOOL)enableGetPasteboard;
+ (void)syncPasteboardChangeCount;
+ (void)trackGetPasteboardString:(id)a0 error:(id)a1;
+ (void)readMarkImage:(id)a0 completion:(id /* block */)a1;
+ (BOOL)detectSelfReflowFromPhotoAlbumIfNeeded:(id)a0;
+ (void)clearDownloadCache;
+ (id)getShareChannelResourceMetric;
+ (id)pasteboardChangeCountQueue;
+ (void)showNoAlbumPermissionAlertWithCancelHandler:(id /* block */)a0 confirmHandler:(id /* block */)a1;
+ (id)textByTruncatingText:(id)a0 withMaxLength:(unsigned long long)a1;
+ (BOOL)pasteboardHasChanged;
+ (BOOL)pasteboardHasChangeInSpecifiedQueue;


@end
