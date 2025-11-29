@class IESLiveLinkBizBaseRTCClient, NSString, IESLiveLinkBizBaseLiveCore, IESLiveLinkBizCommonContext;
@protocol IESLiveLinkBizBaseElementLiveLinkProtocol;

@interface IESLiveLinkBizBaseElement : NSObject <IESLiveLinkBizAction>

@property (retain, nonatomic) IESLiveLinkBizCommonContext *commonContext;
@property (retain, nonatomic) IESLiveLinkBizBaseLiveCore *liveCore;
@property (retain, nonatomic) IESLiveLinkBizBaseRTCClient *rtcClient;
@property (weak, nonatomic) id<IESLiveLinkBizBaseElementLiveLinkProtocol> liveLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)bizType;
- (id)initWithCommonContext:(id)a0 liveCore:(id)a1 rtcClient:(id)a2 liveLink:(id)a3;
- (void).cxx_destruct;

@end
