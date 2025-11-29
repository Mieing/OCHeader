@class NSCache, AWETeenDiscoverChannelContext;

@interface AWETeenDiscoverWaterfallSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) NSCache *cacheSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (retain, nonatomic) AWETeenDiscoverChannelContext *context;

+ (id)viewModel;

- (void)removeAllModels;
- (void)appendAlbums:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
