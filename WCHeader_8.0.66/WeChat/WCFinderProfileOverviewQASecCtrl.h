@class NSString, OpenLiteAppInfo, UIView, FinderLiteAppParam, WCFinderLiteAppFixedEmbdaView;

@interface WCFinderProfileOverviewQASecCtrl : WCFinderProfileOverviewBaseSectionCtrl <WCFinderLiteAppFixedEmbdaViewDelegate>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) FinderLiteAppParam *params;
@property (retain, nonatomic) WCFinderLiteAppFixedEmbdaView *embdaView;
@property (retain, nonatomic) OpenLiteAppInfo *liteAppInfo;
@property (nonatomic) struct CGSize { double width; double height; } displaySize;
@property (nonatomic) BOOL needSaveCacheHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionDefines;
+ (id)appendHalfStyleArgument:(id)a0 isHalfScreen:(BOOL)a1;
+ (void)setupRegister:(id)a0;

- (void)setModel:(id)a0;
- (id)qaInfo;
- (void)setContactViewModel:(id)a0;
- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (BOOL)showBottomJumpTabButton;
- (void)onLiteAppEmbdaViewSizeChanged:(id)a0;
- (void).cxx_destruct;

@end
