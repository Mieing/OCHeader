@class NSString;

@interface AWEWatchVideoLaterTracker : NSObject <AWEWatchVideoLaterTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEnterWatchLaterListWithEnterFrom:(id)a0 ancestorEnterMethod:(id)a1 itemNum:(long long)a2 fromGroupID:(id)a3 previousPage:(id)a4 extra:(id)a5;
+ (void)trackRecommendItemArrayAdd:(id)a0 enterFrom:(id)a1;
+ (void)trackWatchLaterRecommendItemAddWithModel:(id)a0 enterFrom:(id)a1;
+ (void)trackWatchLaterRecommendShowWithEnterFrom:(id)a0 enterMethod:(id)a1;
+ (void)trackWatchLaterRecommendItemShow:(id)a0 enterFrom:(id)a1;
+ (void)trackWatchLaterGuidePanelShow;
+ (void)trackWatchLaterAddWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 logExtra:(id)a3;
+ (void)trackWatchLaterAddWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 didAddtoWatchLater:(BOOL)a3 logExtra:(id)a4;
+ (void)trackWatchLaterAddShowWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;


@end
