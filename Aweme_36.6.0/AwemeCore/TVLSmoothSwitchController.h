@class NSDictionary, NSString;
@protocol TVLSmoothSwitching;

@interface TVLSmoothSwitchController : NSObject {
    struct shared_ptr<livecore::liveplayer::SmoothSwitchController> { struct SmoothSwitchController *__ptr_; struct __shared_weak_count *__cntrl_; } _smoothSwitchController;
}

@property (weak, nonatomic) id<TVLSmoothSwitching> smoothSwitcher;
@property (readonly, copy, nonatomic) NSDictionary *statisticsInfo;
@property (readonly, nonatomic) long long currentTargetBitrate;
@property (readonly, nonatomic) long long currentBitrate;
@property (readonly, copy, nonatomic) NSString *currentTargetTemplate;
@property (readonly, copy, nonatomic) NSString *currentTemplate;
@property (readonly, copy, nonatomic) NSString *currentSessionID;
@property (readonly, nonatomic) long long latestFinishedSwitchFinishedTimestamp;

- (void)handleSmoothSwitchPerformedNotification:(id)a0;
- (id)initWithSmoothSwitcher:(id)a0;
- (long long)updateTargetTemplate:(id)a0 targetBitrate:(long long)a1 sourceTemplate:(id)a2 sourceBitrate:(long long)a3 reqParams:(id)a4 switchMode:(unsigned long long)a5 switchReason:(long long)a6 forced:(BOOL)a7;
- (void)handleStallStart;
- (void)removeAllSwitches;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
