@interface TTTextParagraphStyle : NSObject

@property (nonatomic) void *paragraph_style;
@property (nonatomic) BOOL need_release_;

- (id)initCopy:(void *)a0;
- (float)GetLineSpaceAfter;
- (float)GetLineSpaceBefore;
- (float)GetParagraphSpaceAfter;
- (float)GetParagraphSpaceBefore;
- (float)GetIndentFirstLine;
- (unsigned long long)GetAlignment;
- (id)Clone;
- (unsigned long long)GetVerticalAlignment;
- (float)GetIndentEnd;
- (float)GetIndentStart;
- (float)GetIndentHanging;
- (float)GetLineHeight;
- (void)SetAlignment:(unsigned long long)a0;
- (void)SetVerticalAlignment:(unsigned long long)a0;
- (void)SetIndentEnd:(float)a0;
- (void)SetIndentStart:(float)a0;
- (void)SetIndentHanging:(float)a0;
- (void)SetIndentFirstLine:(float)a0;
- (void)SetLineSpaceBefore:(float)a0;
- (void)SetLineSpaceAfter:(float)a0;
- (void)SetLineHeight:(float)a0;
- (void)SetParagraphSpaceAfter:(float)a0;
- (void)SetParagraphSpaceBefore:(float)a0;
- (id)toNSParagraphStyle;
- (void *)GetParagraphPr;
- (void)SetDefaultRunStyle:(id)a0;
- (void)SetDirection:(long long)a0;
- (id)init;
- (void)dealloc;
- (id)initWith:(void *)a0;

@end
