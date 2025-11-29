@class NSString;

@interface AWELandscapeFeedBaseController : AWEBaseController <AWELandscapeFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)awe_baseCollectionView;
- (id)currentPlayIndex;
- (id)currentPlayCell;
- (id)currentCellModel;
- (id)landscapeContext;
- (id)view;
- (id)viewModel;
- (id)pageContext;

@end
