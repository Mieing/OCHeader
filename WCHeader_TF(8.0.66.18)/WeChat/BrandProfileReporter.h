@class NSString, CContact, BizProfileV2Resp, BrandProfileEnterInfo;

@interface BrandProfileReporter : NSObject <PBMessageObserverDelegate> {
    unsigned int _enterTimestamp;
}

@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSString *enterSearchID;
@property (retain, nonatomic) CContact *brandContact;
@property (retain, nonatomic) BizProfileV2Resp *cacheItem;
@property (retain, nonatomic) NSString *searchClickId;
@property (retain, nonatomic) BrandProfileEnterInfo *profileEnterInfo;

- (id)initWithEnterTimeStamp:(unsigned int)a0;
- (unsigned int)enterTimestamp;
- (void)report10298WhenEnter;
- (void)report10298WhenExit;
- (void)report10298WithUserName:(id)a0 scene:(unsigned int)a1;
- (unsigned int)reportBrandType;
- (id)reportShowFuwuList;
- (void)report10809WithFuwu:(id)a0 fuwuIdx:(unsigned long long)a1;
- (void)report10809WithFuwu:(id)a0 fuwuIdx:(unsigned long long)a1 subFuwu:(id)a2 subFuwuIdx:(unsigned long long)a3;
- (void)report13307WithOpType:(unsigned int)a0 subOpType:(unsigned int)a1;
- (void)report13307WithOpType:(unsigned int)a0 subOpType:(unsigned int)a1 singleBizUin:(unsigned int)a2;
- (void)report13307WithOpType:(unsigned int)a0 subOpType:(unsigned int)a1 fromTab:(unsigned int)a2;
- (void)report13307WithOpType:(unsigned int)a0 subOpType:(unsigned int)a1 fromTab:(unsigned int)a2 sessionIdStr:(id)a3;
- (void)report13307WithOpType:(unsigned int)a0 subOpType:(unsigned int)a1 fromTab:(unsigned int)a2 contentUrl:(id)a3;
- (void)report13307WithOpType:(unsigned int)a0 subOpType:(unsigned int)a1 fromTab:(unsigned int)a2 contentUrl:(id)a3 singleBizUin:(unsigned int)a4;
- (void)report13307WithOpType:(unsigned int)a0 subOpType:(unsigned int)a1 fromTab:(unsigned int)a2 sessionIdStr:(id)a3 contentUrl:(id)a4 singleBizUin:(unsigned int)a5;
- (void)report17523WhenExposure:(id)a0;
- (void)report17523WhenClick:(id)a0;
- (void)report17748WhenRejectRecieveMsg;
- (void)report21647WhenExposure:(long long)a0;
- (void)report21647WhenClick:(long long)a0;
- (void)report21648WhenClick:(id)a0;
- (void)report21648WhenUnfold;
- (void)report22118WhenExposure;
- (void)report22118WhenClick;
- (void)reportBizCommToSvr:(id)a0 businessType:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
