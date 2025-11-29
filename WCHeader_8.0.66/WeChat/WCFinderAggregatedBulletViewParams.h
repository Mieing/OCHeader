@class WCFinderBulletItem, WCFinderFeedContentVM;

@interface WCFinderAggregatedBulletViewParams : NSObject

@property (retain, nonatomic) WCFinderBulletItem *item;
@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (copy, nonatomic) id /* block */ onPlusOneViewTap;

- (void).cxx_destruct;

@end
