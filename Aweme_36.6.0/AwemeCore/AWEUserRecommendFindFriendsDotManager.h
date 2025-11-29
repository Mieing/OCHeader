@class NSString;

@interface AWEUserRecommendFindFriendsDotManager : NSObject <AWEUserRecommendFindFriendsDotManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableShowNumericalDot;
+ (id)lastShownDate;
+ (id)uidKey:(id)a0;
+ (long long)totalImpressionDaysWithoutInteraction;
+ (id)lastClickDate;
+ (void)recordImpressionDate;
+ (void)clearImpressionDaysWithoutInteraction;
+ (id)sharedManager;

- (id)imageWithView:(id)a0;
- (void)updateNumericalDotIfNeeded:(id)a0 count:(long long)a1 completion:(id /* block */)a2;
- (void)recordDotClicked;

@end
