@class IESLiveShortTouchItem;

@interface IESLiveEnhancedTouchView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveShortTouchItem *item;
@property (nonatomic) BOOL isLandscape;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)initWithItem:(id)a0 diContext:(id)a1;
- (void)trackEnhancedTouchShow;
- (void).cxx_destruct;
- (id)viewType;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupView;

@end
