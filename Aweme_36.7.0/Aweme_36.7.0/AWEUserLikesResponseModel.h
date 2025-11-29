@class NSString, NSNumber, NSArray;

@interface AWEUserLikesResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemes;
@property (nonatomic) long long invalidItemCount;
@property (nonatomic) BOOL isHidingInvalidItem;
@property (retain, nonatomic) NSString *invalidItemText;
@property (nonatomic) BOOL canClearInvalidItem;
@property (copy, nonatomic) NSArray *invalidItemIDArray;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;

+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
