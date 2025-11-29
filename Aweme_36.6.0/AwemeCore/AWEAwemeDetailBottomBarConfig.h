@class NSString;

@interface AWEAwemeDetailBottomBarConfig : NSObject <AWEAwemeDetailBottomBarConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFeedInnerSearchContainer;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)isOnlyShowOwnBottomBarWithReferString:(id)a0;
+ (BOOL)canShowBottomBarInListCellWithReferString:(id)a0 enterFrom:(id)a1 model:(id)a2;
+ (Class)aAWEDetailFeedViewControllerAdapterClass;
+ (void)controllerArrayInsertCommentListController:(id)a0;
+ (void)controllerArrayInsertXiguaCommentInputControllerIfNeeded:(id)a0;
+ (long long)getPositionWithReferString:(id)a0 enterFrom:(id)a1;
+ (id)getBottomBarControllersWithPosition:(long long)a0;
+ (id)getBottomBarControllersWithReferString:(id)a0 enterFrom:(id)a1;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (BOOL)canShowBottomBarInListCellWithReferString:(id)a0 enterFrom:(id)a1;
+ (id)getFixedButtonBackgroundColorNameForController:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomBarFrame;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEPlayInteractionAdapter;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEDetailFeedViewControllerAdapter;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;

@end
