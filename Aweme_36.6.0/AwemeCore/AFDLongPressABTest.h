@class NSString;

@interface AFDLongPressABTest : NSObject <AFDLongPressABTestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useModernStyle;
+ (BOOL)shouldDismissAfterClickIMCell:(long long)a0;
+ (BOOL)supportMultiSelect:(long long)a0;
+ (id)recommendActionSorting;
+ (BOOL)shouldUseOnlineSortingForAweme:(id)a0 currentUser:(id)a1;
+ (double)panelHeightPercentage;
+ (double)minimumPressDuration:(long long)a0;
+ (double)dynamicPressDuration;
+ (id)exposedExternalShareOrder;
+ (BOOL)shouldRemoveFavoriteBtnInLongPress;
+ (BOOL)shouldRemoveFavoriteBtnInSharePanel;
+ (double)minimumPressDuration;


@end
