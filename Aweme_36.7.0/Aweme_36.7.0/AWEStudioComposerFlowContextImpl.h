@class NSString;

@interface AWEStudioComposerFlowContextImpl : NSObject <NSCopying, AWEStudioComposerFlowContext>

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *shootWay;
@property (readonly, nonatomic) long long flowStep;
@property (readonly, nonatomic) long long exitReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateExitReasonIfNeeded:(long long)a0;
- (void)updateFlowStep:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)notify;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
