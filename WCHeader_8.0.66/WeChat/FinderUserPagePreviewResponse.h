@class BaseResponse, FinderGetLikedListResponse, InteractionData, MemberQAUserPagePreviewData, FinderPoiInteractionInfo, FinderContact, NSMutableArray;

@interface FinderUserPagePreviewResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int forbiddenFlag;
@property (retain, nonatomic) NSMutableArray *object;
@property (nonatomic) unsigned int nextDuration;
@property (nonatomic) unsigned int showRecentLikedListEntrance;
@property (retain, nonatomic) FinderGetLikedListResponse *recentLikedListResp;
@property (retain, nonatomic) InteractionData *interactionData;
@property (retain, nonatomic) NSMutableArray *item;
@property (retain, nonatomic) MemberQAUserPagePreviewData *memberQaData;
@property (retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo;

+ (void)initialize;

@end
