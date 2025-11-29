@interface WCFinderFlowCellGestureHelper : NSObject

+ (void)responseLongPressGestureFromView:(id)a0 gesture:(id)a1 menuItemStyle:(unsigned long long)a2 pressModelArray:(id)a3;
+ (void)responseLongPressGestureFromView:(id)a0 menuItemStyle:(unsigned long long)a1 pressModelArray:(id)a2;
+ (id)createMenuItemForModel:(id)a0;
+ (void)resignMenuFirstResponderCell:(id)a0;
+ (id)genPressModelByView:(id)a0 menuItemFlag:(unsigned long long)a1;

@end
