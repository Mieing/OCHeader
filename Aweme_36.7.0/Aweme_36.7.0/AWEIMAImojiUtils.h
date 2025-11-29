@interface AWEIMAImojiUtils : NSObject

+ (void)createImageIfPossibleWithKeyword:(id)a0 emoticonModel:(id)a1 textStrokeColor:(id)a2 textColor:(id)a3 completion:(id /* block */)a4;
+ (id)uploadImageData:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)transformToThemeModelWithPackage:(id)a0;
+ (id)emoticonModelFromDictionary:(id)a0;
+ (id)dictionaryFromEmoticonModel:(id)a0;
+ (id)aigcStickerBatchCreateWithArtID:(id)a0 stickers:(id)a1 completion:(id /* block */)a2;
+ (id)aigcFaceImageUploadWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)aigcStickerGetWithArtID:(id)a0 taskIDs:(id)a1 completion:(id /* block */)a2;
+ (id)imageWithImage:(id)a0 text:(id)a1 textStrokeColor:(id)a2 textColor:(id)a3;
+ (id)aigcDirtyWordCheckWithKeyword:(id)a0 completion:(id /* block */)a1;
+ (id)transformToInfoModelWithPackage:(id)a0;

@end
