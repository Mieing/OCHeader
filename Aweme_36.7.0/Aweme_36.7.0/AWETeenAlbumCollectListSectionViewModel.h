@class NSCache;

@interface AWETeenAlbumCollectListSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) NSCache *cacheSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;

+ (id)viewModel;

- (void).cxx_destruct;

@end
