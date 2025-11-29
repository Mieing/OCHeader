@interface AWELongVideoSelectPanelManager : NSObject

+ (BOOL)getIsShowingLongVideoSelectPanel;
+ (void)setIsShowingLongVideoSelectPanel:(BOOL)a0;
+ (double)getSelectPanelHeight;
+ (id)showSelectPanelWithModel:(id)a0 delegate:(id)a1 trackerParams:(id)a2;

@end
