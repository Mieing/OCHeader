@class WCDataItem, WCFinderCollectionShareItem, NSString;

@interface WCFinderCollectionShareMomentViewModel : NSObject <WCContentItemFinderLinkStyleViewModelProtocol>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) WCFinderCollectionShareItem *shareItem;
@property (readonly, nonatomic) NSString *iconURL;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *descString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0;
- (BOOL)enabledFavorite;
- (void)didTapContent;
- (void)didTapFavorite;
- (id)reportParams;
- (void).cxx_destruct;

@end
