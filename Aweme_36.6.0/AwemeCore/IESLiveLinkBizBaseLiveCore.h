@class NSString, LiveCore, IESLiveLinkBizCommonContext;
@protocol IESLiveLinkLiveCore;

@interface IESLiveLinkBizBaseLiveCore : NSObject <IESLiveLinkBizBaseLiveCoreProtocol>

@property (retain, nonatomic) IESLiveLinkBizCommonContext *commonContext;
@property (weak, nonatomic) LiveCore *livecore;
@property (weak, nonatomic) id<IESLiveLinkLiveCore> liveLinkLiveCore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCommonContext:(id)a0 liveCore:(id)a1 livelinkLiveCore:(id)a2;
- (void).cxx_destruct;

@end
