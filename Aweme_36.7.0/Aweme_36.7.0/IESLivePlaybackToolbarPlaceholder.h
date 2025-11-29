@interface IESLivePlaybackToolbarPlaceholder : UIView <HTSLivePluginLayoutView>

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
