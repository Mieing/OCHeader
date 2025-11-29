@interface IESLiveMultiLinkerInfoPlaceholderView : HTSEventForwardingView <HTSLivePluginLayoutView>

@property (nonatomic) double height;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)initWithPlaceholderHeight:(double)a0;
- (id)viewType;

@end
