@class NSString, NSMutableDictionary, NSDictionary, NSObject, IESLivePrefSampleInfo;
@protocol IESLiveEnvironment, OS_dispatch_queue, IESLivePlayerProtocol;

@interface IESLivePerfSampleContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *featureInfos;
@property (retain, nonatomic) NSMutableDictionary *multiInfos;
@property (retain, nonatomic) NSMutableDictionary *viewSummarys;
@property (nonatomic) long long msgTotalCount;
@property (nonatomic) long long msgTotalShowCount;
@property (nonatomic) long long msgRate;
@property (nonatomic) double msgRateTimeStamp;
@property (retain, nonatomic) id<IESLiveEnvironment> liveEnvironment;
@property (copy, nonatomic) NSString *effectParams;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *viceViewType;
@property (copy, nonatomic) id /* block */ audienceCount;
@property (copy, nonatomic) NSString *functionType;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (nonatomic) long long roomScene;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) int vsType;
@property (nonatomic) BOOL degraded;
@property (nonatomic) double enterLiveTime;
@property (nonatomic) long long vrType;
@property (nonatomic) long long vrTransferType;
@property (nonatomic) double samplerDropInterval;
@property (copy, nonatomic) NSString *defaultSdkkey;
@property (copy) id /* block */ definitionKey;
@property (copy) id /* block */ machineIdBlock;
@property (copy) id /* block */ machineTypeBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *perfSamplerQueue;
@property (nonatomic) long long perfSampleScene;
@property (nonatomic) long long isGameLive;
@property (nonatomic) long long gameTagID;
@property (nonatomic) unsigned long long isKeyAnchor;
@property (retain, nonatomic) NSString *categoryID;
@property (nonatomic) unsigned long long landscapeScene;
@property (nonatomic) unsigned long long anchorDegradeState;
@property (retain, nonatomic) IESLivePrefSampleInfo *latestPerSampleInfo;
@property (nonatomic) BOOL isFromDouPlusVideo;
@property (nonatomic) BOOL isFromEffectAdVideo;
@property (retain, nonatomic) NSDictionary *adExtra;
@property (copy) NSString *commentActivityScene;

- (void)addMsgInfos:(long long)a0 msgShowCount:(long long)a1;
- (void)addMsgRate:(long long)a0;
- (void)deactivateFeature:(id)a0;
- (void)activateFeature:(id)a0 info:(id)a1;
- (id)performanceDict;
- (id)toReportContextV2;
- (void)updateEffectParams:(id)a0;
- (void)activateMultiInfos:(id)a0 info:(id)a1;
- (void)deactivateMultiInfos:(id)a0;
- (void)addClass:(id)a0 duration:(double)a1;
- (id)summaryInfo;
- (void).cxx_destruct;
- (id)init;

@end
