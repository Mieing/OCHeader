@class NSString, UIView;

@interface IESECLivePluginLayoutView : UIView <HTSLivePluginLayoutView, IESECLivePluginLayoutView>

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)startShowAnimation:(id /* block */)a0;
- (void).cxx_destruct;
- (id)viewType;
- (void)layoutSubviews;

@end
