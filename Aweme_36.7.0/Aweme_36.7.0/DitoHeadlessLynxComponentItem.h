@class UIView, DitoNode, DitoHeadlessLynxComponentViewModelV2;
@protocol DitoLynxContainerProtocol;

@interface DitoHeadlessLynxComponentItem : NSObject

@property (retain, nonatomic) DitoNode *node;
@property (retain, nonatomic) DitoHeadlessLynxComponentViewModelV2 *viewModel;
@property (retain, nonatomic) UIView<DitoLynxContainerProtocol> *lynxContainer;

- (void).cxx_destruct;

@end
