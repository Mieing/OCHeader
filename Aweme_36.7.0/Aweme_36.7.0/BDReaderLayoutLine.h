@class BDReaderPageContext, NSString, BDReaderParagraphInfo, BDReaderTextRange;

@interface BDReaderLayoutLine : NSObject

@property (retain, nonatomic) BDReaderParagraphInfo *paraInfo;
@property (retain, nonatomic) BDReaderTextRange *textRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectInPage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectInReader;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } layoutRange;
@property (nonatomic) BOOL isParaEnd;
@property (nonatomic) BOOL isParaBegin;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (copy, nonatomic) NSString *lineText;
@property (weak, nonatomic) BDReaderPageContext *pageContext;

- (void).cxx_destruct;

@end
