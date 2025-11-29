@interface FavoritesCommonUtil : NSObject

+ (void)sortArrFavData:(id)a0;
+ (BOOL)SelectFavItem:(id)a0 FromViewController:(id)a1 Delegate:(id)a2 TimeIntervalToOpen:(unsigned int)a3 SearchTagScene:(unsigned int)a4;
+ (BOOL)SelectFavItem:(id)a0 FromViewController:(id)a1 Delegate:(id)a2 thumbView:(id)a3 TimeIntervalToOpen:(unsigned int)a4 SearchTagScene:(unsigned int)a5;
+ (BOOL)SelectFavItem:(id)a0 FromViewController:(id)a1 Delegate:(id)a2 FromScene:(unsigned int)a3 FavIndex:(unsigned int)a4 SearchText:(id)a5;
+ (BOOL)SelectFavItem:(id)a0 FromViewController:(id)a1 Delegate:(id)a2 FromScene:(unsigned int)a3 FavIndex:(unsigned int)a4 SearchText:(id)a5 thumbView:(id)a6;
+ (BOOL)SelectFavItem:(id)a0 FromViewController:(id)a1 Delegate:(id)a2 FromScene:(unsigned int)a3 FavIndex:(unsigned int)a4 SearchText:(id)a5 thumbView:(id)a6 TimeIntervalToOpen:(unsigned int)a7 SearchTagScene:(unsigned int)a8;
+ (unsigned long long)internalOpenFavDataTypeWebPageWithReturnValue:(id)a0 fromViewController:(id)a1 targetUrl:(id)a2;
+ (void)playTingItem:(id)a0 withOptions:(id)a1 fromViewController:(id)a2;
+ (BOOL)openMusicItem:(id)a0 fromViewController:(id)a1;
+ (void)openMusicDataWrap:(id)a0 fromViewController:(id)a1;
+ (BOOL)_openTingAudio:(id)a0 favItem:(id)a1 favData:(id)a2 fromViewController:(id)a3;
+ (BOOL)openTingAudioWithFavItem:(id)a0 fromViewController:(id)a1;
+ (BOOL)openTingAudio:(id)a0 fromViewController:(id)a1;
+ (BOOL)openTingListWithFavItem:(id)a0 fromViewController:(id)a1;
+ (BOOL)openTingList:(id)a0 fromViewController:(id)a1;
+ (void)openBrandMpVideoByFavItem:(id)a0 dataField:(id)a1 fromViewController:(id)a2 thumbView:(id)a3;
+ (BOOL)goToMPShareVideoPageWithFavoritesUrlItem:(id)a0 targetUrl:(id)a1 fromViewController:(id)a2;
+ (BOOL)goToWSVideoFlowPageWithFavoritesUrlItem:(id)a0 fromViewController:(id)a1;
+ (id)genNodeContentView:(id)a0;
+ (void)SelectFavDataItemWrap:(id)a0 FromViewController:(id)a1 Delegate:(id)a2;
+ (void)SelectFavDataItemWrap:(id)a0 FromViewController:(id)a1 thumbImageView:(id)a2 Delegate:(id)a3;
+ (void)SelectFavDataItemWrap:(id)a0 FromViewController:(id)a1 thumbImageView:(id)a2 soundable:(BOOL)a3 Delegate:(id)a4;
+ (void)internalOpenFavDataTypeWebPage:(id)a0 fromViewController:(id)a1 targetUrl:(id)a2;
+ (void)selectLocationData:(id)a0 FromViewController:(id)a1 Delegate:(id)a2;
+ (void)selectFileData:(id)a0 FromViewController:(id)a1;
+ (BOOL)SelectCanvasFavItem:(id)a0 FromViewController:(id)a1 thumbView:(id)a2 TimeIntervalToOpen:(unsigned int)a3 SearchTagScene:(unsigned int)a4;
+ (BOOL)SelectCanvasFavItem:(id)a0 FromViewController:(id)a1 thumbView:(id)a2 showNavigationBar:(BOOL)a3 TimeIntervalToOpen:(unsigned int)a4 SearchTagScene:(unsigned int)a5;
+ (void)SelectWeAppMsg:(id)a0 FromViewController:(id)a1;
+ (void)OpenWeApp:(id)a0 pagePath:(id)a1 debugMode:(unsigned long long)a2 originalMsgSender:(id)a3 messageExtraData:(id)a4 fromViewController:(id)a5;

@end
