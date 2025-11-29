@interface WAForwardUtility : NSObject

+ (id)ConvertWeAppVideo2MsgWrapWithVideoPath:(id)a0 thumbImage:(id)a1;
+ (id)ConvertWeAppVideo2MsgWrapWithVideoInfo:(id)a0;
+ (id)ConvertWeAppImage2MsgWrapWithImage:(id)a0 retErrMsg:(id *)a1;
+ (id)ConvertWeAppFile2MsgWrapWithFilePath:(id)a0 fileName:(id)a1;
+ (id)ConvertWeAppFile2MsgWrapWithFileData:(id)a0 fileName:(id)a1 fileExt:(id)a2;

@end
