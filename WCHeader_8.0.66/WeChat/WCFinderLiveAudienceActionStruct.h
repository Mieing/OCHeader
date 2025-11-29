@class NSString, NSMutableDictionary;

@interface WCFinderLiveAudienceActionStruct : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long liveStartTime;
@property (retain, nonatomic) NSString *finderFeedId;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *liveTopic;
@property (retain, nonatomic) NSString *commentScene;
@property (nonatomic) BOOL isPrivateAccount;
@property (retain, nonatomic) NSString *contextId;
@property (retain, nonatomic) NSString *clickTabContextId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int shopPermit;
@property (nonatomic) unsigned long long enterSessionId;
@property (nonatomic) unsigned long long liveTime;
@property (nonatomic) unsigned long long totalFullTime;
@property (nonatomic) unsigned long long totalFloatTime;
@property (nonatomic) BOOL liveStatus;
@property (nonatomic) unsigned long long actionTS;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *actionResult;
@property (retain, nonatomic) NSMutableDictionary *actionResultDictionary;
@property (nonatomic) long long enterIconType;
@property (nonatomic) long long curOrientation;
@property (retain, nonatomic) NSString *addata;
@property (retain, nonatomic) NSString *scenenote;
@property (nonatomic) unsigned long long roleType;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *clickSubTabContextId;
@property (retain, nonatomic) NSString *channelExtra;
@property (retain, nonatomic) NSString *actionStyle;
@property (retain, nonatomic) NSString *couponId;
@property (retain, nonatomic) NSMutableDictionary *switchExtraDic;

- (id)init;
- (id)toReport;
- (unsigned int)isLiveFollow;
- (void).cxx_destruct;

@end
