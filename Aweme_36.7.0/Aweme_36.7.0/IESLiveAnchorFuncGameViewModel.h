@class NSArray, IESLiveAnchorGameFuncPanelStore, NSDictionary;

@interface IESLiveAnchorFuncGameViewModel : NSObject

@property (copy, nonatomic) NSArray *anchorInteractiveGameItems;
@property (nonatomic) double maxContentHeight;
@property (nonatomic) double contentHeight;
@property (nonatomic) BOOL enableScroll;
@property (nonatomic) double padding;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double safeContainerHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } firstSectionInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } otherSectionInset;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (retain, nonatomic) IESLiveAnchorGameFuncPanelStore *interactiveGameStore;
@property (copy, nonatomic) NSArray *groupNamesArr;
@property (copy, nonatomic) NSDictionary *groupsOfInteractiveGameItems;
@property (copy, nonatomic) NSDictionary *groupPropertyDic;
@property (copy, nonatomic) NSArray *groupOrderArr;
@property (copy, nonatomic) NSArray *sectionOrderArr;

- (void)didSetAttachingDIContext;
- (BOOL)enableToolbarNewStyle;
- (void)pr_updateSafeHeight;
- (void)_setupItemHighLightWith:(id)a0 shouldHighLightItems:(id)a1 nativeItem:(id)a2;
- (id)groupNameWithgroupPropertyDic:(id)a0 groupOrderArr:(id)a1;
- (void)collectToolbarList:(id)a0 remoteGameModels:(id)a1 groupPropertyDic:(id)a2 groupOrderArr:(id)a3 sectionOrderArr:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
