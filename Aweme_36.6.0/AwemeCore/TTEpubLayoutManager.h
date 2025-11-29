@class NSString, TTEpubChapter;
@protocol TTEpubResourceDelegate, TTEpubLayoutDelegate;

@interface TTEpubLayoutManager : NSObject <TTTextLayoutDelegate> {
    struct unique_ptr<ResourceCallback, std::default_delete<ResourceCallback>> { struct __compressed_pair<ResourceCallback *, std::default_delete<ResourceCallback>> { struct ResourceCallback *__value_; } __ptr_; } resource_callback_;
    struct unique_ptr<IOSLayoutPageListener, std::default_delete<IOSLayoutPageListener>> { struct __compressed_pair<IOSLayoutPageListener *, std::default_delete<IOSLayoutPageListener>> { struct IOSLayoutPageListener *__value_; } __ptr_; } layout_callback_;
    struct unique_ptr<ResultCallback, std::default_delete<ResultCallback>> { struct __compressed_pair<ResultCallback *, std::default_delete<ResultCallback>> { struct ResultCallback *__value_; } __ptr_; } result_callback_;
    struct unique_ptr<illusion::EpubManager, std::default_delete<illusion::EpubManager>> { struct __compressed_pair<illusion::EpubManager *, std::default_delete<illusion::EpubManager>> { struct EpubManager *__value_; } __ptr_; } manager_;
    struct unique_ptr<illusion::EpubConfig, std::default_delete<illusion::EpubConfig>> { struct __compressed_pair<illusion::EpubConfig *, std::default_delete<illusion::EpubConfig>> { struct EpubConfig *__value_; } __ptr_; } config_;
    TTEpubChapter *current_chapter_;
}

@property (weak, nonatomic) id<TTEpubResourceDelegate> resourceDelegate;
@property (weak, nonatomic) id<TTEpubLayoutDelegate> layoutDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ApplyConfig:(id)a0;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getCSSString:(id)a0;
- (BOOL)OnPageLayouted:(id)a0 IsLast:(BOOL)a1;
- (void)OnLineLayoutedOnPage:(void *)a0 LineId:(unsigned long long)a1 IsLastLine:(BOOL)a2 AvaliableHeight:(double)a3;
- (void)cancelParser;
- (id)parserAndLayoutHTML:(id)a0 config:(id)a1 FirstPageOffset:(float)a2;
- (void)relayoutChapter:(id)a0 WithSize:(struct CGSize { double x0; double x1; })a1 StartPageIndex:(unsigned long long)a2 FirstPageOffset:(float)a3;
- (void)distributePageOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 InChapter:(id)a1 WithNewHeight:(double)a2;
- (void)notifyAllParagraphs:(id)a0;
- (void)OnChapterCreated:(id)a0;
- (void)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;

@end
