@interface ACCTrimCropEditorTracker : NSObject

+ (void)p_trackEvent:(id)a0 params:(id)a1;
+ (void)getPieceResourceTypeNumberWithImageCNT:(unsigned long long *)a0 videoCNT:(unsigned long long *)a1 pieceArray:(id)a2;
+ (id)commonParamsFromPublishModel:(id)a0;
+ (void)trackEvent:(id)a0 eventParam:(id)a1 needCommonParams:(BOOL)a2 publishViewModel:(id)a3;

@end
