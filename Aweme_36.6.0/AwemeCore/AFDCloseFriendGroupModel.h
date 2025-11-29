@class NSArray, NSMutableDictionary, NSString, NSMutableArray, NSNumber;

@interface AFDCloseFriendGroupModel : AWEBaseApiModel

@property (retain, nonatomic) NSMutableDictionary *groupedMomentMap;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) NSArray *momentIndexList;
@property (nonatomic) long long offset;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (retain, nonatomic) NSString *folderID;
@property (nonatomic) long long headCursor;
@property (nonatomic) long long tailCursor;
@property (nonatomic) BOOL needNormal;
@property (retain, nonatomic) NSNumber *hasInsertID;
@property (nonatomic) BOOL isTimeToLiveStory;
@property (nonatomic) BOOL isLoadingPrevious;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) long long playingOffset;
@property (nonatomic) BOOL isEndingGuideGroup;
@property (copy, nonatomic) NSString *landingItemID;
@property (nonatomic) BOOL isFake;

+ (id)dataListJSONTransformer;
+ (id)momentIndexListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
