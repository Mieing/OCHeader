@class NSString, NSMutableArray;
@protocol AWEProfileRedDotNodeModelProtocol, AWEProfileRedDotShowViewProtocol;

@interface AWEProfileFavoriteSecondTabRedDotAdapter : NSObject <AWEProfileRedDotAdapterProtocol>

@property (retain, nonatomic) NSMutableArray *secondTabNodes;
@property (retain, nonatomic) id<AWEProfileRedDotShowViewProtocol> showView;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindShowView:(id)a0;
- (void)addRedDotNode:(id)a0;
- (void)sortSecondTabNodes;
- (long long)currentNodesCount;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithModel:(id)a0;

@end
