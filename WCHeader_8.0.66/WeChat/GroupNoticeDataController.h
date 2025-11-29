@class NSMutableArray;

@interface GroupNoticeDataController : WeNoteDataController

@property (retain, nonatomic) NSMutableArray *lastDataList;
@property (nonatomic) BOOL needReloadForEditMode;

- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)saveWithHandler:(id /* block */)a0;
- (void)addSizeWithNode:(id)a0 size:(long long *)a1;
- (long long)getAttachmentSizeWithContentStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertAttributes:(id)a0;
- (void)pasteSelectedContent;
- (void)onReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withText:(id)a1 inTextView:(id)a2;
- (void)notifyContentChange;
- (void).cxx_destruct;

@end
