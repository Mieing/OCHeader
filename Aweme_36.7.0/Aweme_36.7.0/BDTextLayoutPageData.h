@class BDReaderImageAttachment, NSString, NSArray, NSMutableSet, BDRAttributedMap, NSAttributedString, NSParagraphStyle;
@protocol BDReaderTTLayoutPageProtocol;

@interface BDTextLayoutPageData : BDLayoutPageData

@property (retain, nonatomic) NSMutableSet *sentenceIdSet;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) BDRAttributedMap *attMap;
@property (readonly, copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attrStr;
@property (retain, nonatomic) id<BDReaderTTLayoutPageProtocol> ttLayoutPage;
@property (nonatomic) unsigned long long textPageIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutRect;
@property (nonatomic) unsigned long long textPageCount;
@property (nonatomic) BOOL isLastParaInNextPage;
@property (nonatomic) BOOL isFirstParaInPreviousPage;
@property (readonly, copy, nonatomic) NSArray *placeholderAttachments;
@property (readonly, copy, nonatomic) NSArray *linkAttachments;
@property (readonly, copy, nonatomic) NSArray *lineInfos;
@property (readonly, copy, nonatomic) NSArray *paraInfos;
@property (readonly, copy, nonatomic) NSParagraphStyle *lastParaStyle;
@property (retain, nonatomic) BDReaderImageAttachment *bgAttachment;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithParagraphInfo:(id)a0;
- (id)contentForFootnoteId:(id)a0;
- (void)updateSententIdSet;
- (id)placeholderAttachmentWithLocation:(unsigned long long)a0;
- (void)removeLinkAttachment:(id)a0;
- (void)addLinkAttachment:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAllLinkAttachments;
- (id)getLinkAttachmentsAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)getPlaceholderAttachmentsAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getRangeWithPlaceholderAttachment:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragrphRangeWithLocation:(unsigned long long)a0;
- (void)addLineInfo:(id)a0;
- (id)getLineInfo:(id)a0;
- (id)getParaInfo:(id)a0;
- (void)removeLineInfo:(id)a0;
- (void)removeAllLineInfos;
- (id)paragrphInfoWithLocation:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paragrphBottomRectWithParagrphInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paragrphTopRectWithParagrphInfo:(id)a0;
- (id)lineRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containSentenceId:(id)a0;
- (void)adaptSpaceWithPageSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)showProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
