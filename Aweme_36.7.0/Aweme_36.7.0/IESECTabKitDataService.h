@class NSString, IESECTabKitTabAnchorModel, IESECTabKitBFFModel, IESECTabKitTabModel, NSArray, NSMapTable;

@interface IESECTabKitDataService : IESECTabKitService <IESECTabKitDataService> {
    Class _bizExtraInfoClass;
    IESECTabKitTabAnchorModel *_firstScreenAnchorModel;
    NSMapTable *_recordMap;
}

@property (nonatomic) BOOL loadingFirstScreenTab;
@property (nonatomic) BOOL finishReload;
@property (retain, nonatomic) IESECTabKitBFFModel *bffModel;
@property (copy, nonatomic) NSString *bffModelString;
@property (retain, nonatomic) IESECTabKitTabAnchorModel *anchorModel;
@property (retain, nonatomic) IESECTabKitTabModel *firstScreenTabInfo;
@property (nonatomic) unsigned long long currentBottomIdx;
@property (nonatomic) unsigned long long currentTopIdx;
@property (copy, nonatomic) NSArray *currentTabContents;
@property (nonatomic) BOOL firstScreenLoaded;
@property (copy, nonatomic) id /* block */ tabContentsFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorModelForTabID:(unsigned long long)a0 withTabs:(id)a1;
+ (id)indexPathForTabID:(unsigned long long)a0 inTabs:(id)a1;
+ (id)anchorModelWithIndexPath:(id)a0 tabs:(id)a1 animated:(BOOL)a2;
+ (id)indexArrayForTabID:(unsigned long long)a0 inTabs:(id)a1;

- (BOOL)isAnchorTab:(unsigned long long)a0;
- (void)loadFirstScreenTab:(id)a0;
- (void)registerModelClassForBizExtraInfo:(Class)a0;
- (void)reloadWithBFFModel:(id)a0;
- (id)firstScreenAnchorModel;
- (void)updateCurrentBottomIdx:(unsigned long long)a0;
- (id)currentBottomTabModel;
- (id)tabModelForBottomIdx:(unsigned long long)a0;
- (id)tabContentsForBottomIdx:(unsigned long long)a0;
- (void)updateCurrentTabContents;
- (id)currentTabContentModel;
- (void)reloadCurTabContentsIfNeeded;
- (void)updateCurrentTopIdx:(unsigned long long)a0;
- (unsigned long long)recordedTopIdxWithBottomIdx:(unsigned long long)a0;
- (id)tabModelForBottomIdx:(unsigned long long)a0 topIdx:(unsigned long long)a1;
- (id)tabModelForAnchorTabID:(unsigned long long)a0 inTabs:(id)a1;
- (BOOL)anchorToTargetTabID:(unsigned long long)a0 animated:(BOOL)a1;
- (id)tabModelForTabID:(unsigned long long)a0;
- (id)tabModelForTabID:(unsigned long long)a0 inTabs:(id)a1;
- (void)p_updateCurrentTabContents:(id)a0;
- (void)parseBizExtraInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
