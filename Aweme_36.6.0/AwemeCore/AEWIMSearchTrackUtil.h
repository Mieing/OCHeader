@class NSString;

@interface AEWIMSearchTrackUtil : NSObject <AEWIMSearchTrackUtilInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didSelectCell:(id)a0 extra:(id)a1 indexPath:(id)a2 recommend:(BOOL)a3 type:(long long)a4;
+ (id)__searchTypeStringForType:(long long)a0;
+ (void)__trackCell:(id)a0 indexPath:(id)a1 event:(id)a2 isRecommend:(BOOL)a3 extra:(id)a4;
+ (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1 isRecommend:(BOOL)a2 searchType:(long long)a3 extra:(id)a4;
+ (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2 isRecommend:(BOOL)a3 extra:(id)a4;
+ (void)showSearchEntrance;
+ (id)sharedInstance;

- (void)enterSearch:(id)a0 searchType:(long long)a1 extraParams:(id)a2;
- (void)enterSearch:(id)a0 searchType:(long long)a1;

@end
