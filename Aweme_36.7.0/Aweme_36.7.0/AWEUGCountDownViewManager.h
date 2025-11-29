@class NSString;

@interface AWEUGCountDownViewManager : NSObject <AWEUGCountDownViewManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackLogWithKey:(id)a0 message:(id)a1;
+ (id)currentFeedContainerViewController;
+ (BOOL)showOnCurrentContainerForView:(id)a0;
+ (id)createNewCountDownViewWithConfig:(id)a0;
+ (BOOL)isSameContainerForCountDownView:(id)a0;
+ (void)removeFromSuperViewIfNeededForCountDownView:(id)a0;
+ (BOOL)showOnCurrentFeedDetailPageForView:(id)a0;
+ (BOOL)showOnFeedContainer:(id)a0;
+ (BOOL)showOnTopContainerForForView:(id)a0;
+ (BOOL)showOnBaseView:(id)a0 countDownView:(id)a1;


@end
