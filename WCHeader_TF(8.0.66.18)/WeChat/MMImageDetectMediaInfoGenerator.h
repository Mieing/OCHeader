@interface MMImageDetectMediaInfoGenerator : NSObject

+ (id)syncGenerateDetectMediaInfoWithSnsMediaItem:(id)a0 businessType:(unsigned int)a1;
+ (void)asyncGenerateDetectMediaInfoWithChatMsgWrap:(id)a0 businessType:(unsigned int)a1 completionHandler:(id /* block */)a2;
+ (void)asyncGenerateDetectMediaInfoWithImageFilePath:(id)a0 businessType:(unsigned int)a1 completionHandler:(id /* block */)a2;
+ (void)fillDetectMediaInfo:(id)a0 imageFilePath:(id)a1 businessType:(unsigned int)a2 completionHandler:(id /* block */)a3;
+ (id)generatClientMsgID;
+ (id)generateTempResizedImagePath:(id)a0;
+ (id)generateTempCompressImagePath:(id)a0;
+ (BOOL)hasSufficientMemoryWithImageWidth:(double)a0 imageHeight:(double)a1;
+ (id)generateResizeConfig:(unsigned int)a0;
+ (unsigned int)ratioLimitWithBusinessType:(unsigned int)a0;
+ (BOOL)isImageLengthOKWithFilePath:(id)a0;
+ (BOOL)isImageAreaOKWithFilePath:(id)a0 businessType:(unsigned int)a1;
+ (unsigned int)allImagePreferSize;
+ (float)allImageCompressionQuality;
+ (unsigned int)searchImageRatioLimit;
+ (unsigned int)ocrImageRatioLimit;

@end
