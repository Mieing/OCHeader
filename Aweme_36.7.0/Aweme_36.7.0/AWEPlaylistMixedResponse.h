@class NSArray, NSNumber;

@interface AWEPlaylistMixedResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *myLists;
@property (nonatomic) BOOL myHasMore;
@property (retain, nonatomic) NSArray *mixedList;
@property (nonatomic) BOOL mixedHasMore;
@property (nonatomic) long long myCursor;
@property (retain, nonatomic) NSArray *collectionLists;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSNumber *totalCount;

+ (id)myListsJSONTransformer;
+ (id)collectionListsJSONTransformer;
+ (id)mixedListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
