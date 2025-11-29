@interface AWEIMAwemeAddBatchEmoticon : NSObject

+ (void)addBatchEmojiWithAwemeModel:(id)a0 indexes:(id)a1 trackInfos:(id)a2 completion:(id /* block */)a3;
+ (void)p_trackFavoriteEmojiWithIndexes:(id)a0 trackInfos:(id)a1;
+ (void)p_requestAddBatchEmoticonsWithParams:(id)a0 trackInfos:(id)a1 completion:(id /* block */)a2;
+ (void)p_getParamArrayWithAwemeModel:(id)a0 indexes:(id)a1 trackInfos:(id)a2 completion:(id /* block */)a3;
+ (void)p_trackFavoriteEmojiConfirmStatusString:(id)a0 sticker:(id)a1 trackInfos:(id)a2 isNew:(BOOL)a3;

@end
