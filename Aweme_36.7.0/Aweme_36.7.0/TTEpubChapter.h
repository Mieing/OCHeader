@class NSMutableDictionary;

@interface TTEpubChapter : NSObject {
    struct unique_ptr<illusion::EpubChapter, std::default_delete<illusion::EpubChapter>> { struct __compressed_pair<illusion::EpubChapter *, std::default_delete<illusion::EpubChapter>> { struct EpubChapter *__value_; } __ptr_; } chapter_;
}

@property (retain, nonatomic) NSMutableDictionary *paragraph_extra_;

- (id)initWithChapter:(struct unique_ptr<illusion::EpubChapter, std::default_delete<illusion::EpubChapter>> { struct __compressed_pair<illusion::EpubChapter *, std::default_delete<illusion::EpubChapter>> { struct EpubChapter *x0; } x0; })a0;
- (void *)GetChapter;
- (id)getExtra:(int)a0;
- (void)setExtra:(id)a0 paraId:(int)a1;
- (id)FindPageByID:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
