@class NSString, NSData, ActiveSessionContext, NSMutableArray;

@interface TingLaunchInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) int playIndex;
@property (nonatomic) int fromScene;
@property (nonatomic) BOOL withFloatBall;
@property (retain, nonatomic) NSString *singerCategoryId;
@property (retain, nonatomic) NSString *categoryName;
@property (nonatomic) int categoryType;
@property (nonatomic) int playMode;
@property (nonatomic) BOOL shuffle;
@property (nonatomic) BOOL isFromSnsTl;
@property (retain, nonatomic) NSString *sourceBizId;
@property (nonatomic) int controlType;
@property (nonatomic) BOOL resetHome;
@property (retain, nonatomic) NSData *controllerSessionBuffer;
@property (retain, nonatomic) NSString *commentId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) BOOL retHomeInAudio;
@property (nonatomic) BOOL mergeWithBaseListenId;
@property (retain, nonatomic) ActiveSessionContext *activeSession;
@property (nonatomic) int openTabType;
@property (nonatomic) BOOL isAuthor;
@property (retain, nonatomic) NSMutableArray *extParamsKey;
@property (retain, nonatomic) NSMutableArray *extParamsValue;
@property (nonatomic) BOOL fromJsApi;
@property (nonatomic) BOOL consumed;
@property (nonatomic) BOOL enter;
@property (nonatomic) BOOL isHalfScreen;
@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int categoryConsumeType;

+ (void)initialize;

@end
