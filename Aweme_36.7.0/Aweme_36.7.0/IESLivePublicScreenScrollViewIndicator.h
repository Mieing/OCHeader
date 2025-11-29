@class UILabel, UIView;
@protocol IESLivePublicScreenScrollViewIndicatorDelegate;

@interface IESLivePublicScreenScrollViewIndicator : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UILabel *publicScreenTab;
@property (retain, nonatomic) UILabel *channelTab;
@property (retain, nonatomic) UIView *channelRedDot;
@property (nonatomic) long long selectedTab;
@property (weak, nonatomic) id<IESLivePublicScreenScrollViewIndicatorDelegate> delegate;

- (id)attributedTextWithString:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)showChannelRedDotIfNeeded;
- (BOOL)redDotWithType:(long long)a0;
- (void)selectChannelTab;
- (void)selectPublicScreenTab;
- (id)createTabLabel;
- (void)showChannelRedDot:(BOOL)a0;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
