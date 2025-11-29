@class NSString, NSArray;

@interface AWEPreviewViewListContainerViewModel : AWEBaseListViewModel

@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *bizUIName;
@property (retain, nonatomic) NSArray *viewList;

- (void)fetchListData;
- (void)setupViewModel;
- (void).cxx_destruct;

@end
