@class NSString;

@interface AWEFollowListFooterViewModel : AWEBaseListSectionViewModel

@property (nonatomic) unsigned long long footerType;
@property (copy, nonatomic) NSString *vcd;
@property (copy, nonatomic) id /* block */ loadmoreButtonClickedBlock;
@property (nonatomic) long long realationType;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)updateModels:(unsigned long long)a0;
- (void).cxx_destruct;

@end
