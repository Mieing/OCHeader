@class NSArray;

@interface AFDFamiliarDataFilteredInfo : NSObject

@property (nonatomic) long long typeValidFilteredCount;
@property (retain, nonatomic) NSArray *typeValidFilteredIDs;
@property (nonatomic) long long alreadyReadFilteredCount;
@property (retain, nonatomic) NSArray *alreadyReadFilteredIDs;
@property (nonatomic) long long legalityFilteredCount;
@property (retain, nonatomic) NSArray *legalityFilteredIDs;
@property (nonatomic) long long personalizeFilteredCount;
@property (retain, nonatomic) NSArray *personalizeFilteredIDs;
@property (nonatomic) long long dislikeFilteredCount;
@property (retain, nonatomic) NSArray *dislikeFilteredIDs;
@property (nonatomic) long long duplicationFilteredCount;
@property (retain, nonatomic) NSArray *duplicationFilteredIDs;
@property (nonatomic) long long preloadFilteredCount;
@property (retain, nonatomic) NSArray *preloadFilteredIDs;
@property (nonatomic) long long specialCardFilteredCount;
@property (retain, nonatomic) NSArray *specialCardFilteredIDs;
@property (nonatomic) long long story25FilteredCount;
@property (retain, nonatomic) NSArray *story25FilteredIDs;

+ (id)getFilteredIDsFrom:(id)a0 to:(id)a1;
+ (id)transArrayToIDs:(id)a0;

- (void).cxx_destruct;

@end
