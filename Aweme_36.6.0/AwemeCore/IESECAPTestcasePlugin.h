@class NSString, NSMutableSet, IESECHybridParamsVerifyHelper;

@interface IESECAPTestcasePlugin : NSObject <IESECHybridParamsVerifyCallBackDelegate, IESECActionTrackerPlugin> {
    IESECHybridParamsVerifyHelper *_verifyHelper;
    BOOL _workPrepared;
    NSMutableSet *_notReadyPathIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receive:(id)a0;
- (void)actionPathStart:(id)a0;
- (void)actionPathEnd:(id)a0;
- (void)receive:(id)a0 pathID:(id)a1;
- (void)verifyActionPathStart:(id)a0 pathID:(id)a1;
- (void)verifyActionNode:(id)a0 pathID:(id)a1;
- (void)verifyActionPathEndWithPathID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
