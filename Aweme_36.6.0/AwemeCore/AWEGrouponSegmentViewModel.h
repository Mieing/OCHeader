@class NSString, NSArray, NSMutableDictionary, NSDictionary, AWEGrouponMutipleTabModel, NSMutableArray, AWEGrouponBubbleModel, AWEGrouponPageContext;

@interface AWEGrouponSegmentViewModel : NSObject <AWEGrouponBubbleViewMessage>

@property (retain, nonatomic) AWEGrouponPageContext *pageContext;
@property (nonatomic) BOOL hasClickTab;
@property (retain, nonatomic) AWEGrouponMutipleTabModel *tabsModel;
@property (retain, nonatomic) NSMutableArray *hasExposedTabIDList;
@property (retain, nonatomic) NSArray *segmentNames;
@property (retain, nonatomic) NSArray *tabLists;
@property (retain, nonatomic) NSArray *tabIDs;
@property (retain, nonatomic) NSMutableDictionary *segmentNamesImageDict;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long selectedTabID;
@property (nonatomic) long long previousSelectedIndex;
@property (retain, nonatomic) AWEGrouponBubbleModel *tabBubbleModel;
@property (readonly, nonatomic) NSDictionary *tabImageDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (id)initWithPageContext:(id)a0;
- (void)bindObservers;
- (void)updateSelectedIndex:(long long)a0;
- (void)nearbyGrouponTabBubbleWillShowWithModel:(id)a0;
- (void)nearbyGrouponTabBubbleWillDissmissWithModel:(id)a0;
- (void)trackSegmentItemExposeWithIndexListIfNeeded:(id)a0;
- (void)updateSelectedIndex:(long long)a0 hasClickedTab:(BOOL)a1;
- (void)trackSegmentItemSlided;
- (void)trackSegmentItemClickedWithIndex:(long long)a0;
- (void)clearExposedList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
