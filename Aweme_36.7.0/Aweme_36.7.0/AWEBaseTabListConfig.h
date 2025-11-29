@interface AWEBaseTabListConfig : NSObject

@property (nonatomic) BOOL enableTabChangeAnimation;
@property (nonatomic) BOOL disableTabContentScroll;
@property (nonatomic) BOOL disableTabContentBounce;
@property (nonatomic) BOOL disableTabContentManulPan;
@property (nonatomic) BOOL enableDynamicTabContentViewHeight;
@property (nonatomic) BOOL notifyHeaderAppearanceWhenScrolling;
@property (nonatomic) long long layoutSubviewsOptions;
@property (nonatomic) BOOL addTabItemViewWhenSwitchTabOptimized;
@property (nonatomic) BOOL notifyTabItemAppearanceWhenSwitchTabOptimized;
@property (nonatomic) BOOL fixTabItemHeightUpdate;
@property (nonatomic) BOOL observeTabItemContentInsets;

@end
