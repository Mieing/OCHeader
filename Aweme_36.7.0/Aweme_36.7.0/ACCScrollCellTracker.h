@interface ACCScrollCellTracker : NSObject

+ (id)tableView:(id)a0;
+ (id)collectionView:(id)a0;
+ (void)trackTableViewCellStart:(id)a0 customType:(id)a1;
+ (void)trackTableViewCellEnd:(id)a0 customType:(id)a1;
+ (void)trackCollectionCellStart:(id)a0 customType:(id)a1;
+ (void)trackCollectionCellEnd:(id)a0 customType:(id)a1;

@end
