@class NSString, NSMutableArray, AFDFamiliarFriendsListDataController;

@interface AFDSearchBarPlaceHolderConfig : NSObject

@property (retain, nonatomic) NSString *activityID;
@property (retain, nonatomic) NSMutableArray *placeHolderTextArray;
@property (retain, nonatomic) AFDFamiliarFriendsListDataController *dataController;
@property (copy, nonatomic) id /* block */ updateOuterSearchBarBlock;
@property (nonatomic) BOOL isShowingActivity;

+ (id)sharedInstance;

- (long long)localFriendsListNumber;
- (long long)newFriendsListNumber;
- (void)updateUIWithLocalDataForSearchBar:(id)a0 isInverse:(BOOL)a1;
- (void)updateUIWithString:(id)a0 searchBar:(id)a1 isInverse:(BOOL)a2;
- (long long)newRecommendCount;
- (id)localFriendsListText;
- (void).cxx_destruct;

@end
