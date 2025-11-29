@class SAMIVESVCInfo, SAMIVESVCInfoGroup, NSDictionary, NSMutableDictionary, NSString;
@protocol SAMIVESVCTaskEventDelegate;

@interface SAMIVESVCTask : NSObject <SAMIVESVCTaskProtocol>

@property (nonatomic) long long status;
@property (nonatomic) long long curVEUtils;
@property (retain, nonatomic) SAMIVESVCInfoGroup *curGroup;
@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSMutableDictionary *groupMap;
@property (retain, nonatomic) SAMIVESVCInfo *curInfo;
@property (weak, nonatomic) id<SAMIVESVCTaskEventDelegate> eventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)safeQueue;
+ (id)cancelQueue;

- (void)prepareWithConfig:(id)a0;
- (void)startWithGroup:(id)a0;
- (void)forceStopAndRelease;
- (id)shareSafeQueue;
- (id)shareCancelQueue;
- (void)setupVEUtils;
- (void)forceStopGroup:(id)a0;
- (void)cancelUtils:(unsigned long long)a0;
- (void)syncGroupToVE:(id)a0;
- (void)processInfoIfNeeded:(id)a0 ofGroup:(id)a1;
- (void)p_boardCastGroupComplete:(id)a0;
- (void)onProcessError:(int)a0 ofUtils:(unsigned long long)a1 info:(id)a2 group:(id)a3;
- (void)releaseVEUtils:(unsigned long long)a0;
- (void)cleanUpInfo;
- (void)onProgressUpdate:(unsigned long long)a0 totalMS:(unsigned long long)a1 ofInfo:(id)a2 group:(id)a3;
- (void)onInfoFinished:(id)a0 ofGroup:(id)a1;
- (void)prepareToRelease;
- (void)onEventReceive:(int)a0 statusCode:(int)a1 curPath:(id)a2 totalSize:(unsigned long long)a3 curSize:(unsigned long long)a4 aggregatePath:(id)a5 fromUtils:(long long)a6;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;

@end
