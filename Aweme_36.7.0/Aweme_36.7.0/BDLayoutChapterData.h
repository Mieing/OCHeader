@class NSArray, BDReaderChapterInfo, BDReaderChapterContent, BDRAttributedMap, NSString, NSMutableArray, NSAttributedString;

@interface BDLayoutChapterData : NSObject

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } pageDataRwlock;
@property (copy, nonatomic) NSAttributedString *chapterAttrStr;
@property (retain, nonatomic) BDRAttributedMap *attMap;
@property (retain, nonatomic) NSMutableArray *pageDatas;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long textPageCount;
@property (readonly, nonatomic) unsigned long long progressPageCount;
@property (retain, nonatomic) BDReaderChapterInfo *chapterData;
@property (retain, nonatomic) BDReaderChapterContent *chapterContent;
@property (copy, nonatomic) NSString *chapterText;
@property (readonly, copy, nonatomic) NSArray *layoutPageDatasArr;

- (id)paragrphInfoWithPid:(id)a0;
- (id)paraInfoWithLocation:(unsigned long long)a0;
- (id)titleParagrphInfo;
- (void)appendPageData:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithSelectionInfoRange:(id)a0;
- (id)selectionInfoRangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragrphTitleRange;
- (id)fetchChapterImageAttachments;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithParagraphInfo:(id)a0;
- (void)addLinkAttachment:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragrphRangeWithLocation:(unsigned long long)a0;
- (id)getLayoutPageDataWithPageIndex:(unsigned long long)a0;
- (unsigned long long)positionWithSelectionInfoPosition:(id)a0;
- (void)configPageDatas:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)subTextWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
