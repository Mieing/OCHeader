@interface AWEAIGCTextStickerDataConvertor : NSObject

+ (id)parseExtraFromDataModel:(id)a0;
+ (id)convertLocationModelFromTextInfo:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1 playerFrameSize:(struct CGSize { double x0; double x1; })a2;
+ (double)convertStickerScaleFromTextInfo:(id)a0 playerFrameSize:(struct CGSize { double x0; double x1; })a1 stickerViewSize:(struct CGSize { double x0; double x1; })a2;
+ (id)convertTextModelFromTextInfo:(id)a0 content:(id)a1;
+ (id)fontModelWithId:(id)a0;

@end
