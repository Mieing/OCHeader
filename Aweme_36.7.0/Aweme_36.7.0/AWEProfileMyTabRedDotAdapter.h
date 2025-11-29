@class NSString, NSMutableDictionary, NSMutableSet;
@protocol AWEProfileRedDotNodeModelProtocol, AWEProfileRedDotShowViewProtocol;

@interface AWEProfileMyTabRedDotAdapter : NSObject <AWEProfileRedDotAdapterProtocol>

@property (retain, nonatomic) id<AWEProfileRedDotShowViewProtocol> showView;
@property (retain, nonatomic) NSMutableDictionary *myTabNodes;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentShowModel;
@property (retain, nonatomic) NSMutableSet *currentShowNodeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabBarDidChangeNotification:(id)a0;
- (BOOL)enableAlog;
- (void)bindShowView:(id)a0;
- (void)addRedDotNode:(id)a0;
- (id)boundChildNodes;
- (void)updateRedDotUI;
- (long long)priorityWithBusinessType:(long long)a0 model:(id)a1;
- (BOOL)isDiff:(id)a0 with:(id)a1;
- (id)myTabRedDotLog;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
