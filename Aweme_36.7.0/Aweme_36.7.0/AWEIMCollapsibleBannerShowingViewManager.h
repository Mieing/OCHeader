@class NSMutableSet;

@interface AWEIMCollapsibleBannerShowingViewManager : NSObject

@property (retain, nonatomic) NSMutableSet *usableViewSet;
@property (retain, nonatomic) NSMutableSet *usingViewSet;

- (id)allocBannerView;
- (void)recycleBannerView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
