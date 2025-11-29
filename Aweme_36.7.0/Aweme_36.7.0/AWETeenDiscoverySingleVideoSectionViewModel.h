@class AWETeenDiscoverChannelContext;

@interface AWETeenDiscoverySingleVideoSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (retain, nonatomic) AWETeenDiscoverChannelContext *context;

+ (id)viewModel;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
