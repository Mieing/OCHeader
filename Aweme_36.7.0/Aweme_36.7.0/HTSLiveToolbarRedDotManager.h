@interface HTSLiveToolbarRedDotManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedManager;

- (BOOL)showRedDot:(id)a0;
- (void)redDotTapped:(id)a0;
- (BOOL)secondCellSpecialItemShowRed:(id)a0 specialItem:(id)a1;
- (void)secondCellSpecialItemDidTapeed:(id)a0 specialItem:(id)a1;
- (id)readTimeStampFromSetting:(id)a0;
- (id)secondCellReadTimeStampFromFirstIdentifier:(id)a0 secondIdentifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
