@class NSString, RTVListPluginContext;
@protocol RTVListViewControllerPlugin, RTVCollectionViewControllerSegmentControllerDelegate;

@interface RTVPluginSegmentController : NSObject <RTVCollectionViewControllerSegmentController>

@property (readonly, copy, nonatomic) id<RTVListViewControllerPlugin> plugin;
@property (readonly, nonatomic) RTVListPluginContext *context;
@property (nonatomic) double pluginHeight;
@property (weak, nonatomic) id<RTVCollectionViewControllerSegmentControllerDelegate> segmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPluginSection:(id)a0;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0 withCellModel:(id)a1;
- (struct CGSize { double x0; double x1; })supplementarySizeForCollectionView:(id)a0 elementsKind:(id)a1 sectionIdentifier:(id)a2;
- (id)__pluginSectionIdentifier;
- (id)__pluginHeaderReuseIdentifier;
- (void).cxx_destruct;
- (id)sectionModels;

@end
