@class NSString, AWESmartCollectionHeaderSectionModel;

@interface AWESmartCollectionHeaderSectionManager : AWEUserWorkSectionManager <AWEUserWorkSectionManagerProtocol>

@property (retain, nonatomic) AWESmartCollectionHeaderSectionModel *model;
@property (nonatomic) unsigned long long sectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)viewController;
- (id)viewModel;
- (double)sectionHeight;

@end
