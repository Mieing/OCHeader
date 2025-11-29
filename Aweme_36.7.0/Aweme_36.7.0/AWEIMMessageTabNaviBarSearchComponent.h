@class NSString, AWEIMMessageTabNaviBarSearchEntryView;

@interface AWEIMMessageTabNaviBarSearchComponent : AWEIMComponentBase <AWEIMChatListHeaderProvider, AWEIMMessageTabNaviBarSearchInterface>

@property (retain, nonatomic) AWEIMMessageTabNaviBarSearchEntryView *searchView;
@property (nonatomic) BOOL enableTransitionAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowCurrentHeader;
- (id)headerViewForChatList;
- (void)trackEnterIMSearch;
- (void).cxx_destruct;
- (id)trackIdentifier;
- (id)searchBarView;

@end
