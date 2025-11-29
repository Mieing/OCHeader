@class AWEProfileUpdateDataFavoriteRedDotModel, NSString, NSMutableSet, AWEProfileFavoriteFirstTabRedDotAdapter;
@protocol AWEProfileRedDotNodeProtocol, AWEProfileRedDotNodeModelProtocol;

@interface AWEProfileFavoriteFirstTabRedDotNode : NSObject <AWEProfileRedDotNodeProtocol>

@property (weak, nonatomic) id<AWEProfileRedDotNodeProtocol> parentNode;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentModel;
@property (retain, nonatomic) NSMutableSet *childNodesSet;
@property (retain, nonatomic) AWEProfileFavoriteFirstTabRedDotAdapter *firstTabAdapter;
@property (retain, nonatomic) AWEProfileUpdateDataFavoriteRedDotModel *favoriteRedDotModel;
@property (nonatomic) unsigned long long favoriteType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)storageKey;
- (void)hideFirstTabNode;
- (void)bindParentNode:(id)a0;
- (void)bindAdapter:(id)a0;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (void)setupAdapter;
- (void)setupChildNodes;
- (void)registerShortLink;
- (void)updateCurrentModel;
- (id)nameForBizID;
- (void).cxx_destruct;
- (id)init;
- (void)addChildNode:(id)a0;
- (void)updateWithModel:(id)a0;

@end
