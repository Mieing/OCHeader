@class NSMutableDictionary, BDPSubscribeStorage, NSDateFormatter, BDPUniqueID;

@interface BDPSubscribe : NSObject {
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPSubscribeStorage *subscribeStorage;
@property (retain, nonatomic) NSMutableDictionary *tmpTrackData;

+ (id)getSubscribeInstanceFromUniqueID:(id)a0;

- (void)reportWhenReqSubMsgCalledAndServerDataUpdate:(unsigned long long)a0;
- (void)requestShortTermSubscribeMessageForTemplateInfoList:(id)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)requestLongTermSubscribeMessageForTemplateInfoList:(id)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)eventForSubscribeApiTiggerWithTimesType:(unsigned long long)a0;
- (void)eventForSubscribeMsgIDAuthResult:(id)a0;
- (void)executeCompleteBlock:(id /* block */)a0 withResult:(id)a1 andErrorCode:(long long)a2;
- (void)updateTrackDataWithMsgId:(id)a0 authorize:(BOOL)a1 denyFrom:(unsigned long long)a2;
- (id)generateSubscriptionListWithAuthorizedTemplates:(id)a0 deniedTemplates:(id)a1 isLongTerm:(BOOL)a2 feedCardShowStatus:(unsigned long long)a3 authResult:(id)a4;
- (BOOL)enableLynxManage;
- (void)enableSubscribeMessage:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateSubscription:(id)a0 withAction:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
