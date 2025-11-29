@interface AWEIMAImojiAddHandler : NSObject

+ (id)contextWithArtStyle:(id)a0 completion:(id /* block */)a1;
+ (id)uploadImageNode;
+ (id)batchAddNode;
+ (id)p_uploadTaskWithEmoticon:(id)a0 context:(id)a1 quality:(double)a2;
+ (id)pipeline;
+ (id)endNode;

@end
