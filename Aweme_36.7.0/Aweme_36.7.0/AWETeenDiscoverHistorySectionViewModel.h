@class AWETeenDiscoverChannelContext, NSString;

@interface AWETeenDiscoverHistorySectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (retain, nonatomic) AWETeenDiscoverChannelContext *context;
@property (copy, nonatomic) NSString *columnTitle;
@property (copy, nonatomic) NSString *columnID;

+ (id)viewModelWithBlockData:(id)a0;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
