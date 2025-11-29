@interface AWEChapterPanelUtils : NSObject

+ (id)getThumbnailImgUrlByModel:(id)a0 index:(long long)a1;
+ (BOOL)enableNewThumbnailLogic;
+ (double)heightForTextString:(id)a0 font:(id)a1 limitedWidth:(double)a2 limitedLines:(unsigned long long)a3 lineHeightMutiple:(double)a4;
+ (long long)linesWithAttributedString:(id)a0 limitedWidth:(double)a1;
+ (BOOL)enableSmartChapterInteraction;
+ (id)formatTimestamp:(long long)a0;
+ (BOOL)useNewThumbnailDataWithModel:(id)a0;
+ (void)getVideoPreviewImageIndex:(long long)a0 aweme:(id)a1 context:(id)a2 completion:(id /* block */)a3;
+ (id)framePreviewImageForProgress:(double)a0 aweme:(id)a1 context:(id)a2 originalImage:(id)a3;
+ (double)heightForTextString:(id)a0 font:(id)a1 limitedWidth:(double)a2 limitedLines:(unsigned long long)a3;

@end
