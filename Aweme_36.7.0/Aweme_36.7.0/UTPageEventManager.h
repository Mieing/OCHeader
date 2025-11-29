@class NSString, NSMutableDictionary, UTPage;

@interface UTPageEventManager : NSObject <UTMCLifeCycleProtocol>

@property (retain) NSMutableDictionary *pageItems;
@property (retain) UTPage *currentPage;
@property (retain) UTPage *prePage;
@property (retain) NSMutableDictionary *nextPageProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)getInstance;

- (void)switchBackGround;
- (void)switchForeGround;
- (id)ifH5currentPageKey;
- (id)pageItemForKey:(id)a0;
- (void)addPageItem:(id)a0 with:(id)a1;
- (void)removePageItemForKey:(id)a0;
- (id)currentPageName;
- (id)getNextPageProperties;
- (void)setCurrentPageName:(id)a0 withKey:(id)a1 ifH5:(id)a2;
- (BOOL)updateCurrentPageName:(id)a0 forKey:(id)a1;
- (BOOL)backToPrePage:(id)a0;
- (void)updateNextPageProperties:(id)a0;
- (id)currentPageKey;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
