@class NSString;
@protocol AWEProfileRedDotNodeProtocol, AWEProfileRedDotNodeModelProtocol;

@interface AWEProfileBindGuideRedDotNode : NSObject <AWEProfileRedDotNodeProtocol>

@property (weak, nonatomic) id<AWEProfileRedDotNodeProtocol> parentNode;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBindGuideRedDotRequestFinish;
- (void)showRedDotIfNeed;
- (void)bindParentNode:(id)a0;
- (void)bindAdapter:(id)a0;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
