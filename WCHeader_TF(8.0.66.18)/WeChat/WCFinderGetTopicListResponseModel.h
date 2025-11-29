@class FinderTopicBgmInfo, NSArray, WCFinderTopicInfo, NSData, NSString, FinderGetTopicListResponse;

@interface WCFinderGetTopicListResponseModel : NSObject

@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL upContinueFlag;
@property (nonatomic) BOOL downContinueFlag;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (nonatomic) BOOL similarFlag;
@property (retain, nonatomic) NSArray *poiTopicRecommendArray;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) FinderTopicBgmInfo *bgmInfo;
@property (nonatomic) unsigned int feedFollowPermissionFlag;
@property (nonatomic) unsigned int disabledFlag;
@property (nonatomic) unsigned int reviseFeedCount;
@property (nonatomic) BOOL hasPrefetched;
@property (retain, nonatomic) FinderGetTopicListResponse *resp;

- (void).cxx_destruct;

@end
