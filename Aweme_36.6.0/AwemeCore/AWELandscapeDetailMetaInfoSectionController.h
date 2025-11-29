@class AWELandscapePageContext;
@protocol AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeDetailMetaInfoSectionController : AWEBaseListSectionController

@property (retain, nonatomic) AWELandscapePageContext *context;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> splitScreenContainer;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)updateLayout:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)separatorColor;
- (id)init;
- (double)separatorHeight;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct AWEListKitSeparatorInsets { double x0; double x1; })separatorInsets;

@end
