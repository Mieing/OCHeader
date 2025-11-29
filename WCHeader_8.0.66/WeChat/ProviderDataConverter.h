@interface ProviderDataConverter : NSObject

+ (id)getConformsToType:(id)a0 types:(id)a1;
+ (id)getValidateTypes:(id)a0 types:(id)a1;
+ (id)decodeUTF16WithBOM:(id)a0;
+ (id)covertToString:(id)a0 textUTType:(id)a1;
+ (int)getVideoDuration:(id)a0;
+ (id)generateVideoMessageWrap:(id)a0;
+ (id)generateMessageWrapWithURL:(id)a0 type:(id)a1;

@end
