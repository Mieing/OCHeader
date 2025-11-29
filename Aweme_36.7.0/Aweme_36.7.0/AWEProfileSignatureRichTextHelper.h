@interface AWEProfileSignatureRichTextHelper : NSObject

+ (id)configAtrributedContent:(id)a0 content:(id)a1 fontSize:(double)a2 adapteBigFont:(BOOL)a3 textExtras:(id)a4 withOffset:(long long)a5 isFromOthersProfilePage:(BOOL)a6;
+ (void)addUserHighlightInAttributedText:(id)a0 contentText:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fontSize:(double)a3 adapteBigFont:(BOOL)a4 userID:(id)a5 isFromOthersProfilePage:(BOOL)a6;
+ (id)contentFont:(double)a0 adapteBigFont:(BOOL)a1;
+ (id)configAtrributedContent:(id)a0 content:(id)a1 fontSize:(double)a2 textExtras:(id)a3 withOffset:(long long)a4 isFromOthersProfilePage:(BOOL)a5;

@end
