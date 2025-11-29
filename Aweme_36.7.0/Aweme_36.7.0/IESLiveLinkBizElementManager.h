@class IESLiveLinkBizElementManagerConfig, NSString, ByteRTCEngine, LiveCore, NSMutableArray;
@protocol IESLiveLinkReporterProtocol, IESLiveLinkBizBaseElementLiveLinkProtocol, IESLiveLinkLiveCore;

@interface IESLiveLinkBizElementManager : NSObject <IESLiveLinkBizFilterProtocol, IESLiveLinkBizBaseRTCClientRTCProvider>

@property (retain, nonatomic) IESLiveLinkBizElementManagerConfig *config;
@property (retain, nonatomic) NSMutableArray *bizElements;
@property (weak, nonatomic) id<IESLiveLinkLiveCore> liveCoreClient;
@property (weak, nonatomic) ByteRTCEngine *rtcEngine;
@property (weak, nonatomic) LiveCore *livecore;
@property (weak, nonatomic) id<IESLiveLinkBizBaseElementLiveLinkProtocol> livelink;
@property (weak, nonatomic) id<IESLiveLinkReporterProtocol> liveLinkReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 liveCoreClient:(id)a1 livecore:(id)a2 livelink:(id)a3;
- (id)bizFilter;
- (id)realTimeChorusElement;
- (id)multiChorusElement;
- (BOOL)performBizActionWithWithArgs:(SEL)a0;
- (void)loadAllElements;
- (id)bizElementClassTuples;
- (void).cxx_destruct;

@end
