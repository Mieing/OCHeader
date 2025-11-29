@interface ACCInteractionStickerFontHelper : NSObject

+ (id)interactionStcikerFontNames;
+ (void)downloadFontIfNeedWithFont:(id)a0;
+ (BOOL)shouldExtraPreDownloadFont:(id)a0;
+ (id)interactionFontWithFontName:(id)a0 fontSize:(double)a1;

@end
