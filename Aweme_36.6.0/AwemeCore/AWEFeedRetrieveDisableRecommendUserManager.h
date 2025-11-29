@class NSString, AWEFeedRetrieveDisableRecommendUserFrequencyChecker, NSMutableSet;

@interface AWEFeedRetrieveDisableRecommendUserManager : NSObject <AWEFeedRetrieveDisableRecommendUserManagerProtocol>

@property (retain, nonatomic) AWEFeedRetrieveDisableRecommendUserFrequencyChecker *frequencyChecker;
@property (nonatomic) long long continuousSkipCountLimit;
@property (retain, nonatomic) NSMutableSet *trackItemIDArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestParams;
+ (BOOL)enableRetrieveDisableRecommendUser;
+ (BOOL)canShowBottomBarWithContinuousSkipCount:(long long)a0;
+ (void)recordHasShownBottomBarWithItemID:(id)a0;
+ (void)recordBottomBarClicked;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
