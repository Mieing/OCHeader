@class NSString, NSMutableString, RTEContentStorage, MMTimer, NSMutableArray;
@protocol RTESectionMgrDelegate;

@interface RTESectionMgr : MMObject <RTETextViewSectionDelegate> {
    NSMutableString *m_contentString;
    RTEContentStorage *m_storage;
    NSMutableArray *m_sections;
    NSMutableArray *m_cacheTextViews;
    MMTimer *m_clearTextViewTimer;
    unsigned long long m_cacheLocation;
    unsigned long long m_cacheLocationIndex;
    unsigned long long m_totalLength;
    double m_cacheContentOffset;
    unsigned long long m_cacheContentOffsetIndex;
    double m_totalHeight;
    unsigned long long m_currentIndex;
    double m_currentOffset;
}

@property (weak, nonatomic) id<RTESectionMgrDelegate> delegate;
@property (nonatomic) double lastCellExtendHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentStorage:(id)a0;
- (unsigned long long)sectionCount;
- (unsigned long long)allParagraphCount;
- (BOOL)checkRangeValid:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (double)calculateTotalSectionHeight;
- (double)totalHeightToIndex:(unsigned long long)a0;
- (id)viewAtIndex:(unsigned long long)a0;
- (double)cellHeightAtIndex:(unsigned long long)a0;
- (id)viewAtLocation:(unsigned long long)a0;
- (void)updateContentOffset:(double)a0;
- (void)removeAllView;
- (void)reloadContentAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 needRegenerateContent:(BOOL)a1;
- (id)getTextAttachmentForAttribute:(id)a0;
- (id)copySectionAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)replaceContentAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atSection:(unsigned long long)a1 withText:(id)a2;
- (id)appendText:(id)a0;
- (id)appendSections:(id)a0 withText:(id)a1;
- (id)replaceTextAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withText:(id)a1;
- (id)replaceSectionsAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withSections:(id)a1 withText:(id)a2;
- (id)getAllContent;
- (void)chectAndClearCacheViews;
- (void)updateCacheViewsWithSectionChangeInfo:(id)a0;
- (void)generateCellViewAtIndex:(unsigned long long)a0 withView:(id)a1 needResize:(BOOL)a2;
- (void)updateCacheOffsetToOffset:(double)a0;
- (void)updateCacheLocationToLocation:(unsigned long long)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (double)contentOffsetAtIndex:(unsigned long long)a0;
- (unsigned long long)locationOfSectionAtIndex:(unsigned long long)a0;
- (void)onUpdateTextView:(id)a0;
- (void).cxx_destruct;

@end
