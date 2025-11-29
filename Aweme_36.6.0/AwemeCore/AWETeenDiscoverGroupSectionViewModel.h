@class AWETeenDiscoverChannelContext;

@interface AWETeenDiscoverGroupSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (retain, nonatomic) AWETeenDiscoverChannelContext *context;

+ (BOOL)canShowWithResourceList:(id)a0;
+ (id)viewModel;

- (void)replaceWithResourceList:(id)a0;
- (void).cxx_destruct;

@end
