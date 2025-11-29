@class NSString, FinderEventBaseRequest, NSData, BoardIndexInfo;

@interface GetActivityBoardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseRequest *baseReq;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *wxUsername;
@property (retain, nonatomic) NSData *lastCtx;
@property (retain, nonatomic) NSString *stageId;
@property (retain, nonatomic) NSString *boardIndex;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) BoardIndexInfo *boardIndexInfo;

+ (void)initialize;

@end
