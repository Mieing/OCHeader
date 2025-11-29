@class NSString, NSMutableDictionary;

@interface WCFinderLiveAnchorActionStruct : NSObject

@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *finderWxAppInfo;
@property (nonatomic) BOOL isPrivateAccount;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long actionTS;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderFeedId;
@property (retain, nonatomic) NSString *liveTopic;
@property (nonatomic) unsigned long long liveTime;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) unsigned long long onlineCount;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *actionResult;
@property (retain, nonatomic) NSMutableDictionary *actionResults;
@property (nonatomic) unsigned long long startSourceScene;
@property (retain, nonatomic) NSString *chnlExtra;
@property (nonatomic) int screenType;

- (id)toReport;
- (void).cxx_destruct;

@end
