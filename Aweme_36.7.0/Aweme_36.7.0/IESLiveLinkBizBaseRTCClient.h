@class NSString, IESLiveLinkBizCommonContext;
@protocol IESLiveLinkBizBaseRTCClientRTCProvider;

@interface IESLiveLinkBizBaseRTCClient : NSObject <IESLiveLinkBizBaseRTCClientProtocol>

@property (retain, nonatomic) IESLiveLinkBizCommonContext *commonContext;
@property (weak, nonatomic) id<IESLiveLinkBizBaseRTCClientRTCProvider> rtcEngineProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rtcEngine;
- (id)initWithCommonContext:(id)a0 rtcEngineProvider:(id)a1;
- (void).cxx_destruct;

@end
