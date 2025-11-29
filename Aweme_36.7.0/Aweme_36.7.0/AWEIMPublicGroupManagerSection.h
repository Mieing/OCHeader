@class AWEIMPublicGroupManagerSectionHeaderViewModel;

@interface AWEIMPublicGroupManagerSection : NSObject

@property (readonly, nonatomic) long long section;
@property (readonly, nonatomic) AWEIMPublicGroupManagerSectionHeaderViewModel *header;

- (id)initWithSection:(long long)a0 viewModel:(id)a1;
- (void).cxx_destruct;

@end
