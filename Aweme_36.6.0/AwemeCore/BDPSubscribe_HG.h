@class NSDateFormatter, BDPUniqueID, BDPSubscribeStorage_HG;

@interface BDPSubscribe_HG : NSObject {
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPSubscribeStorage_HG *subscribeStorage;

- (void)requestShortTermSubscribeMessageForTemplateInfoList:(id)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)requestLongTermSubscribeMessageForTemplateInfoList:(id)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)enableSubscribeMessage:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateSubscription:(id)a0 withAction:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)eventForPermissionViewShowWithTimesType:(unsigned long long)a0;
- (void)eventForUserPermissionWithResult:(long long)a0 timesType:(unsigned long long)a1 eventExtra:(id)a2;
- (id)generateAuthResultDictFromSubscriptionList:(id)a0 subscribeResult:(id)a1 hasSuccess:(BOOL *)a2;
- (void)updateTemplateIDLastAlertTime:(id)a0 deniedTemplates:(id)a1;
- (id)generateSubscriptionListWithAuthorizedTemplates:(id)a0 deniedTemplates:(id)a1 isLongTerm:(BOOL)a2 authResult:(id)a3;
- (void)requestUserLogin:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
