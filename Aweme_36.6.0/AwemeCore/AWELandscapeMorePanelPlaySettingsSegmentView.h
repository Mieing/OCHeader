@class NSArray, UILabel, UIView;
@protocol AWELandscapeMorePanelPlaySettingsSegmentViewDelegate;

@interface AWELandscapeMorePanelPlaySettingsSegmentView : UIView

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *labelBackView;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UILabel *selectedLabel;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<AWELandscapeMorePanelPlaySettingsSegmentViewDelegate> delegate;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)segmentFont;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)setDefaultSelectIndex:(long long)a0;
- (void)labelClick:(id)a0 isUserAction:(BOOL)a1;
- (void)labelDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)setupUI;
- (id)initWithItems:(id)a0 delegate:(id)a1;

@end
