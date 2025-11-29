@class StoreEmotionBatchEmojiDownLoadCgi;

@interface LiteAppJsApiEmoticonOpenBrowseVC : LiteAppJsApi

@property (retain, nonatomic) StoreEmotionBatchEmojiDownLoadCgi *batchCgi;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)openBrowsePage:(id)a0 scene:(int)a1 isHalfScreen:(BOOL)a2;
- (void)endWithOK;
- (id)getViewController;
- (void).cxx_destruct;

@end
