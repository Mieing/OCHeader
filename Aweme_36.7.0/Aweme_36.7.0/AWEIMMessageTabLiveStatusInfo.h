@class NSString, NSNumber, NSDictionary;

@interface AWEIMMessageTabLiveStatusInfo : AWEBaseBizConfigModel <AWEIMMessageTabLiveStatusProtocol>

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *convID;
@property (nonatomic) long long liveStatus;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSDictionary *roomDict;
@property (copy, nonatomic) NSString *roomData;
@property (retain, nonatomic) NSDictionary *btmParams;
@property (nonatomic) long long chatType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserID:(id)a0;
- (BOOL)notBindChat;
- (void)unbindChat;
- (void)bindChatIfNeeded:(id)a0 chatIndex:(long long)a1 messageRootVC:(id)a2;
- (void)updateLiveStatus:(long long)a0 roomID:(id)a1 roomDict:(id)a2 roomData:(id)a3 requestID:(id)a4;
- (void).cxx_destruct;

@end
