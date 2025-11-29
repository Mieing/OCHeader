@class NSString, NSMutableDictionary;

@interface WCFinderLiveExposeStruct : NSObject

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long liveID;
@property (retain, nonatomic) NSString *feedID;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long actionTS;
@property (nonatomic) long long action;
@property (retain, nonatomic) NSString *commentScene;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long enterStatus;
@property (retain, nonatomic) NSString *snsSessionID;
@property (nonatomic) long long shareType;
@property (retain, nonatomic) NSString *shareUserName;
@property (retain, nonatomic) NSString *contextId;
@property (nonatomic) unsigned int onlineNum;
@property (retain, nonatomic) NSString *clickTabContextId;
@property (nonatomic) BOOL isPrivate;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *snsFeedId;
@property (nonatomic) unsigned long long enterSessionId;
@property (nonatomic) long long enterIconType;
@property (retain, nonatomic) NSString *clickSubTabContextId;
@property (retain, nonatomic) NSString *channelExtra;
@property (retain, nonatomic) NSMutableDictionary *switchExtraDic;

- (id)toReport;
- (void).cxx_destruct;

@end
