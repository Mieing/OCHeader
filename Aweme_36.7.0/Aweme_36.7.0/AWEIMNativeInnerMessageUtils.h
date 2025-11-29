@interface AWEIMNativeInnerMessageUtils : NSObject

+ (id)typeToComponentNameMap;
+ (unsigned long long)streamStatusOfMessage:(id)a0;
+ (BOOL)isTyperTypeWithElement:(id)a0;
+ (id)recoverMdAttachmentToStingWithAttriStr:(id)a0;
+ (void)configSubMessage:(id)a0 withParentMessage:(id)a1 index:(long long)a2;
+ (struct CGSize { double x0; double x1; })getSizeWithOrientation:(unsigned long long)a0;
+ (id)removeBlankLines:(id)a0;
+ (void)updateInnerImageMessageLocalExtWithMessage:(id)a0 DBModel:(id)a1 key:(id)a2;
+ (id)innerKeyWithIndex:(long long)a0;
+ (id)innerLocalExtInMessage:(id)a0 innerIndex:(long long)a1;
+ (id)adjustLineHeightOfAttributedString:(id)a0 lineHeight:(double)a1;

@end
