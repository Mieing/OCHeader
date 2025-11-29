@class NSString;
@protocol AWEProfileRedDotNodeProtocol, AWEProfileRedDotNodeModelProtocol;

@interface AWEProfileLoginGuideRedDotNode : NSObject <AWEAppAwemeSettingMessage, AWEUserMessage, AWEProfileRedDotNodeProtocol>

@property (weak, nonatomic) id<AWEProfileRedDotNodeProtocol> parentNode;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)awemeSettingDidChange;
- (void)showRedDotIfNeed;
- (void)bindParentNode:(id)a0;
- (void)bindAdapter:(id)a0;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (void)hideLoginGuideRedDotFromTab;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
