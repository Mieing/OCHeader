@class AWEFansListFansCountWrapperModel;

@interface AWERelationCommonSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) long long type;
@property (nonatomic) long long fansCount;
@property (nonatomic) BOOL hasExpanded;
@property (retain, nonatomic) AWEFansListFansCountWrapperModel *fansCountWrapperModel;

- (void)setupViewModel;
- (void)fetchSectionData;
- (void).cxx_destruct;

@end
