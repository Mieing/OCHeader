@class NSArray, NSString, NSMutableArray, NSNumber;

@interface AWENewStoryGroupModel : AWEBaseApiModel

@property (retain, nonatomic) NSMutableArray *storyList;
@property (retain, nonatomic) NSArray *storyIndexList;
@property (retain, nonatomic) NSArray *filterIDs;
@property (retain, nonatomic) NSArray *unreadIDs;
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
@property (nonatomic) long long story25VV;
@property (nonatomic) double story25Duration;
@property (nonatomic) BOOL isLoadingPrevious;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) long long playingOffset;
@property (nonatomic) BOOL isEndingGuideGroup;
@property (copy, nonatomic) NSString *landingItemID;
@property (nonatomic) BOOL isFake;

+ (id)storyListJSONTransformer;
+ (id)storyIndexListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
