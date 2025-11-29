@class EmoticonStoreFootView, NSString, DesignerPortfolioCollectionViewProvider, UILabel;

@interface MMStoreEmoticonDesignerPackBaseViewController : MMUIViewController <DesignerPortfolioCollectionViewProviderDelegate>

@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) DesignerPortfolioCollectionViewProvider *provider;
@property (retain, nonatomic) UILabel *emptyHintLabel;
@property (retain, nonatomic) EmoticonStoreFootView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDesignerUin:(unsigned int)a0;
- (void)viewDidLoad;
- (void)initNavBar;
- (void)OnCancelModalView:(id)a0;
- (void)onTapBackBarItem;
- (void)initView;
- (void)viewDidTransitionToNewSize;
- (BOOL)shouldRemoveExpiredPack;
- (void)onGetEmoticonPacksForDisplay:(BOOL)a0;
- (void)onFetchMoreEmoticonData;
- (void)onFetchDoneEmoticonData;
- (void).cxx_destruct;

@end
