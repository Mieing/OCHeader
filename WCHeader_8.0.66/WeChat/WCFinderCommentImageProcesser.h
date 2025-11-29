@interface WCFinderCommentImageProcesser : NSObject

+ (void)uploadCommentImage:(id)a0 completion:(id /* block */)a1;
+ (id)fillCommentImageDataWithComment:(id)a0 uploadInfo:(id)a1 image:(id)a2 feedID:(id)a3 commentScene:(int)a4;
+ (unsigned long long)exifJSONMaxUploadLength;
+ (id)exifJSONAttachKey;

@end
