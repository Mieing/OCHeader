@class NSMutableDictionary;
@protocol WCRedEnvelopesNetworkHelperDelegate;

@interface WCRedEnvelopesNetworkHelper : MMObject <PBMessageObserverDelegate> {
    NSMutableDictionary *m_dicCGIStartedTime;
}

@property (weak, nonatomic) id<WCRedEnvelopesNetworkHelperDelegate> m_delegate;

+ (void)initialize;
+ (void)idkeyCmdReport:(unsigned int)a0 keyName:(id)a1;
+ (void)idkeyCmdReport:(unsigned int)a0 keyName:(id)a1 value:(unsigned int)a2;

- (id)init;
- (void)dealloc;
- (void)WCToOpenIMCommonRequest:(id)a0;
- (void)WCToHongbaoCommonRequest:(id)a0;
- (void)WCToYearHongbaoRequest:(id)a0;
- (void)WCToEnterpriseHBBizReq:(id)a0;
- (void)WCToEnterpriseCommonBizReq:(id)a0;
- (void)WCToAsyncBizSubcribeReq:(id)a0;
- (void)MessageReturnOnOpenIMHongbao:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnOnLiveStreamHongbao:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnOnHongbao:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnOnEnterpriseHongbao:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnOnCommonBizHongbao:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnOnAsyncBizSubScribe:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)reportHongBaoTenPayRes:(id)a0;
- (void).cxx_destruct;

@end
