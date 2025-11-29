@class LVMediaDraft, NSString, LVResourceDownloader, LVDataBridge;
@protocol LVPlayerItemSourceDelegate, LVPlayerItemSourceDataSource;

@interface LVPlayerItemSource : NSObject <_LVTemplateSourceDelegate, _LVNLETemplateSourceDelegate> {
    struct shared_ptr<cut::TemplateSource> { struct TemplateSource *__ptr_; struct __shared_weak_count *__cntrl_; } m_src;
    struct shared_ptr<cut::LVResourceFetcher> { struct LVResourceFetcher *__ptr_; struct __shared_weak_count *__cntrl_; } m_resourceFetcher;
    struct shared_ptr<cut::_LVTemplateSourceOberser> { struct _LVTemplateSourceOberser *__ptr_; struct __shared_weak_count *__cntrl_; } m_observer;
    struct shared_ptr<cut::NLETemplateSource> { struct NLETemplateSource *__ptr_; struct __shared_weak_count *__cntrl_; } m_src_nle_template;
    struct shared_ptr<cut::_LVNLETemplateSourceOberser> { struct _LVNLETemplateSourceOberser *__ptr_; struct __shared_weak_count *__cntrl_; } m_observer_nle_template;
}

@property (copy, nonatomic) id /* block */ progress;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *workspace;
@property (retain, nonatomic) LVMediaDraft *draft;
@property (retain, nonatomic) LVDataBridge *bridge;
@property (retain, nonatomic) LVResourceDownloader *downloader;
@property (readonly, copy, nonatomic) NSString *region;
@property (weak, nonatomic) id<LVPlayerItemSourceDelegate> delegate;
@property (weak, nonatomic) id<LVPlayerItemSourceDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transJsonToDraft:(id)a0;
+ (id)transDraftToJson:(id)a0;
+ (id)workspacePath;
+ (BOOL)isUnzipFailedErrorCode:(long long)a0;
+ (BOOL)isFetchEffectFailedErrorCode:(long long)a0;
+ (BOOL)isDownloadZipFailedErrorCode:(long long)a0;

- (void)downloadEffects:(id)a0 completion:(id /* block */)a1;
- (void)replaceFragments:(id)a0;
- (struct TemplateSourceConfig { BOOL x0; BOOL x1; })defaultSourceConfig;
- (void)configCore;
- (void)clearRsourceFetcher;
- (void)sourcePreSuccessProject:(struct shared_ptr<CutSame::TemplateModel> { struct TemplateModel *x0; struct __shared_weak_count *x1; })a0;
- (void)sourceDidSuccessProject:(struct shared_ptr<CutSame::TemplateModel> { struct TemplateModel *x0; struct __shared_weak_count *x1; })a0;
- (void)sourceDidFailedCode:(int)a0 subCode:(int)a1 message:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a2;
- (void)sourceDidUpdateProgress:(long long)a0;
- (void)sourcePreSuccessNLETemplateProject:(struct shared_ptr<cut::model::NLETemplateModel> { struct NLETemplateModel *x0; struct __shared_weak_count *x1; })a0;
- (void)sourceDidSuccessNLETemplateProject:(struct shared_ptr<cut::model::NLETemplateModel> { struct NLETemplateModel *x0; struct __shared_weak_count *x1; })a0;
- (void)sourceDidFailedNLETemplateCode:(int)a0 subCode:(int)a1 message:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a2;
- (void)sourceDidUpdateNLETemplateProgress:(long long)a0;
- (id)initWithDownloadUrl:(id)a0 templateID:(id)a1 workspace:(id)a2;
- (void)setupAsyncWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (id)resultDraft;
- (struct NLETemplateSourceConfig { BOOL x0; BOOL x1; })defaultNLETemplateSourceConfig;
- (void)configNLETemplateEffectDownloaderParams;
- (void)configNLETemplateCore;
- (id)initWithDownloadUrl:(id)a0 templateID:(id)a1 workspace:(id)a2 region:(id)a3;
- (id)resultNLEDraft;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void)setup;
- (void)cancel;

@end
