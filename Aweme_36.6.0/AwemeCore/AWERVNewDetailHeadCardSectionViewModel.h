@class AWERVNewDetailPlayVideoViewController;

@interface AWERVNewDetailHeadCardSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWERVNewDetailPlayVideoViewController *videoViewController;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)configVideoViewController:(id)a0 logExtraDict:(id)a1 playControlModel:(id)a2;
- (void).cxx_destruct;

@end
