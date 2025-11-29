@class NSString, NSMutableSet;
@protocol AWEProfileRedDotAdapterProtocol, AWEProfileRedDotNodeModelProtocol;

@interface AWEProfileMyTabRedDotNode : NSObject <AWEProfileRedDotNodeProtocol>

@property (weak, nonatomic) id<AWEProfileRedDotAdapterProtocol> myTabRedDotAdapter;
@property (nonatomic) long long businessType;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentModel;
@property (retain, nonatomic) NSMutableSet *childNodesSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindParentNode:(id)a0;
- (void)bindAdapter:(id)a0;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (id)nodeWithBusinessType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)addChildNode:(id)a0;
- (void)updateWithModel:(id)a0;

@end
