@class IESLiveLayoutBaseContainer, IESLiveStackManager;

@interface IESLiveStackDynamicRule : NSObject

@property (weak, nonatomic) IESLiveLayoutBaseContainer *parentContainer;
@property (nonatomic) unsigned long long activityType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (weak, nonatomic) IESLiveStackManager *stackManager;

- (void)executeAtState:(unsigned long long)a0 managedStack:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
