@class BDASRichText, BDASTextLayoutFrame, NSString, NSArray, UIFont, BDASRichTextTruncationConfig, NSAttributedString;

@interface BDASRichTextTruncatedResult : NSObject

@property (weak, nonatomic) BDASRichText *richText;
@property (retain, nonatomic) BDASRichTextTruncationConfig *truncationConfig;
@property (nonatomic) unsigned long long lineLimited;
@property (nonatomic) struct CGSize { double width; double height; } constrainedSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } truncationStringRange;
@property (retain, nonatomic) BDASTextLayoutFrame *layoutFrame;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *attachmentAttributeName;
@property (copy, nonatomic) NSArray *activeRanges;
@property (retain, nonatomic) UIFont *adjustedFont;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;
@property (readonly, nonatomic) unsigned long long layoutLineCount;
@property (readonly, nonatomic, getter=isTruncated) BOOL truncated;

- (BOOL)isValidWithSize:(struct CGSize { double x0; double x1; })a0 lineLimited:(unsigned long long)a1 adjustedFont:(id)a2 config:(id)a3;
- (id)initWithRichText:(id)a0 constraintSize:(struct CGSize { double x0; double x1; })a1 lineLimited:(unsigned long long)a2 config:(id)a3;
- (void).cxx_destruct;

@end
