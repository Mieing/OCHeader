@interface AWEFeedStickerHandlerFactory : NSObject

+ (BOOL)supportGlobalSticker:(id)a0;
+ (id)albumHandlersForModel:(id)a0;
+ (id)searchAlbumHandlersForModel:(id)a0;
+ (id)searchTagsForModel:(id)a0;
+ (id)videoHandlersForItemModel:(id)a0;
+ (id)videoHandlersForAwemeModel:(id)a0;
+ (Class)videoHandlerClassForType:(long long)a0 awemeModel:(id)a1;
+ (Class)videoHandlerClassForType:(long long)a0 itemModel:(id)a1;
+ (Class)albumHandlerClassForType:(long long)a0;

@end
