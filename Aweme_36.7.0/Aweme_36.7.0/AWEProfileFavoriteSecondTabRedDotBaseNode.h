@class AWEProfileFavoriteSecondTabRedDotAdapter, AWEProfileUpdateDataFavoriteRedDotModel, NSString;
@protocol AWEProfileRedDotNodeProtocol, AWEProfileRedDotNodeModelProtocol;

@interface AWEProfileFavoriteSecondTabRedDotBaseNode : NSObject <AWEUserMessage, AWEProfileRedDotNodeProtocol>

@property (weak, nonatomic) id<AWEProfileRedDotNodeProtocol> parentNode;
@property (weak, nonatomic) AWEProfileFavoriteSecondTabRedDotAdapter *favoriteSecondTabAdapter;
@property (nonatomic) long long priority;
@property (retain, nonatomic) AWEProfileUpdateDataFavoriteRedDotModel *favoriteRedDotModel;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentModel;
@property (nonatomic) unsigned long long favoriteType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)updateCurrentModel:(BOOL)a0;
- (void)bindParentNode:(id)a0;
- (void)bindAdapter:(id)a0;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (void)redDotDismissedWithReason:(long long)a0;
- (id)generateComponentID;
- (BOOL)isnodeInFrequencyControl;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
