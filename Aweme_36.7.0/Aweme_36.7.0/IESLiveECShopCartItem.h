@class HTSLiveToolbarItem, NSString;

@interface IESLiveECShopCartItem : NSObject <IESECLiveShopCartItem>

@property (weak, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCustomItemView:(id)a0;
- (void)setItemHidden:(BOOL)a0;
- (void)setHiddenForLandscape:(BOOL)a0;
- (void)setOnItemTapper:(id /* block */)a0;
- (id)initWithToolBarItem:(id)a0;
- (void).cxx_destruct;
- (void)setItemImage:(id)a0;

@end
