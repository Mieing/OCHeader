@interface MessageCommonUploadUtil : NSObject

+ (unsigned int)maxMiddleImageSize;
+ (BOOL)isMidImageInvalidForMsg:(id)a0;
+ (id)compressImageByConfig:(id)a0 imageData:(id)a1 image:(id)a2;
+ (void)generateMidImageWithPath:(id)a0 midPath:(id)a1 complete:(id /* block */)a2;
+ (void)generateMidImage:(id)a0 midPath:(id)a1 complete:(id /* block */)a2;
+ (void)generateMidImageWithImageData:(id)a0 midPath:(id)a1 complete:(id /* block */)a2;
+ (void)generateMidImageForStorage:(id)a0 complete:(id /* block */)a1;
+ (void)compressMidImageForStorage:(id)a0 imgPath:(id)a1 complete:(id /* block */)a2;
+ (void)generateMidImageForMsg:(id)a0 complete:(id /* block */)a1;
+ (void)convertImgToWxamIn:(id)a0 complete:(id /* block */)a1;
+ (long long)getNewToolValueForC2CWxamEncode;

@end
