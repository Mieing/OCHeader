@class FinderPreloadInfo, NSString, FinderObject, NSData, NSMutableArray, BaseResponse;

@interface FinderGetCommentDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *commentInfo;
@property (retain, nonatomic) FinderObject *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int upContinueFlag;
@property (nonatomic) unsigned int downContinueFlag;
@property (nonatomic) unsigned int nextCheckObjectStatus;
@property (nonatomic) unsigned int secondaryShowFlag;
@property (retain, nonatomic) NSMutableArray *barrageCommentInfo;
@property (retain, nonatomic) NSMutableArray *refObjectList;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSString *jsonResp;
@property (retain, nonatomic) NSMutableArray *descCommentInfo;
@property (retain, nonatomic) NSData *asyncLoadInfoBuffer;

+ (void)initialize;

@end
