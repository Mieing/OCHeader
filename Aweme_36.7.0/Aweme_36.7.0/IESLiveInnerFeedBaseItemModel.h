@class FeedItem, NSString, IESLiveEnterRoomBusinessParamsArray, NSNumber, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedBaseItemModel : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *feedItemDesc;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) FeedItem *feedItem;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) unsigned long long hideType;
@property (nonatomic) BOOL isClickRoom;
@property (nonatomic) BOOL isClickRoomNoReset;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL disableDelete;
@property (nonatomic) BOOL isDefaultItem;
@property (nonatomic) BOOL isFirstRecommendRoom;
@property (nonatomic) BOOL reqFromFollowRecommend;
@property (nonatomic) BOOL reqFromNewInnerRecommend;
@property (copy, nonatomic) id /* block */ afterDidLoad;
@property (nonatomic) double firstExposureTime;
@property (nonatomic) long long firstExposureFloor;
@property (nonatomic) long long feedFetchCount;
@property (nonatomic) long long contentCategory;
@property (retain, nonatomic) NSNumber *feedbackID;
@property (retain, nonatomic) IESLiveEnterRoomBusinessParamsArray *businessParams;
@property (nonatomic) BOOL isFinished;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (id)feedType;
- (long long)index;
- (id)description;
- (Class)cellClass;
- (Class)sectionClass;

@end
