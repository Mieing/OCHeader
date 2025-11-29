@class WCFinderFeedContentVM;
@protocol WCFinderCommonBottomViewDelegate;

@interface WCFinderCommonBottomBannerView : UIView

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) unsigned long long bannerType;
@property (weak, nonatomic) id<WCFinderCommonBottomViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ hiddenBottomBannerViewBlock;

- (void).cxx_destruct;

@end
