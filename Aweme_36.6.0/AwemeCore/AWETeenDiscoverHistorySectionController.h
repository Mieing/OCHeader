@class NSString;

@interface AWETeenDiscoverHistorySectionController : AWEBaseListSectionController <AWEListSectionControllerDelegate, AWETeenDiscoverSectionControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAppear;

- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)sectionTrackAppear;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)separatorColor;
- (id)init;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
