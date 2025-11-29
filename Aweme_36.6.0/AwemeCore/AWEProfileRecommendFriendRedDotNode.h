@class NSString;
@protocol AWEProfileRedDotNodeProtocol, AWEProfileRedDotNodeModelProtocol;

@interface AWEProfileRecommendFriendRedDotNode : NSObject <AWEUserMessage, AWEProfileRedDotNodeProtocol>

@property (weak, nonatomic) id<AWEProfileRedDotNodeProtocol> parentNode;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentModel;
@property (nonatomic) BOOL canTrackAddFriendsDotImpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showViews;
- (void)setShowViews:(id)a0;
- (id)currentShowModel;
- (void)setCurrentShowModel:(id)a0;
- (void)refreshRecommendFriendShowViewWithScene:(id)a0;
- (void)fetchRecommendFriendCountInEntryWithScene:(id)a0;
- (void)bindParentNode:(id)a0;
- (void)bindAdapter:(id)a0;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (void)bindShowView:(id)a0;
- (void)removeShowView:(id)a0;
- (BOOL)recommendCountRequestOnAir;
- (void)setRecommendCountRequestOnAir:(BOOL)a0;
- (void)entryDidClicked;
- (void)showRedDotInEntryIfNeed;
- (void)hideRedDotInEntry;
- (long long)recommendCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
