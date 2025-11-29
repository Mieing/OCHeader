@class UIView, LLDitoNode, LLDitoHeadlessLynxComponentViewModelV2;
@protocol LLDitoLynxContainerProtocol;

@interface LLDitoHeadlessLynxComponentItem : NSObject

@property (retain, nonatomic) LLDitoNode *node;
@property (retain, nonatomic) LLDitoHeadlessLynxComponentViewModelV2 *viewModel;
@property (retain, nonatomic) UIView<LLDitoLynxContainerProtocol> *lynxContainer;

- (void).cxx_destruct;

@end
