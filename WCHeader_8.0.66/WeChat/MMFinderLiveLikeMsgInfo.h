@class NSMutableArray, FinderLiveAppMsg;

@interface MMFinderLiveLikeMsgInfo : NSObject

@property (nonatomic) unsigned int startMsgId;
@property (nonatomic) unsigned int endMsgId;
@property (retain, nonatomic) NSMutableArray *userInfoList;
@property (nonatomic) unsigned int likeUvNum;
@property (retain, nonatomic) FinderLiveAppMsg *rootAppMsg;

+ (id)createLiveLikeMsgInfo:(id)a0;
+ (BOOL)checkLikeLiveMsgInfoPBValid:(id)a0;

- (id)description;
- (BOOL)isMsgIdRangeEqual:(id)a0;
- (void).cxx_destruct;

@end
