@class NSString, NSDictionary, AWEHPPinTopComponentCallContext, AWEHPPinTopUIContext;
@protocol AWEPzComponentProtocol;

@interface AWEHPPinTopComponentTask : NSObject <AWEHPPinTopComponentTaskProtocol>

@property (nonatomic) BOOL hasInvokePinTopCompletion;
@property (nonatomic) BOOL hasPinTopConfirmed;
@property (nonatomic) BOOL hasComponentShown;
@property (nonatomic) BOOL hasComponentDismiss;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL isPinTopComponentCheckSuccess;
@property (retain, nonatomic) AWEHPPinTopComponentCallContext *callContext;
@property (copy, nonatomic) id /* block */ successBubbleShowBlock;
@property (copy, nonatomic) id /* block */ successBubbleDismissBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ pinTopCompletion;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;
@property (weak, nonatomic) AWEHPPinTopUIContext *context;
@property (copy, nonatomic) id /* block */ pinTopResultBlock;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (retain, nonatomic) NSString *targetPinTopTabID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTask;

- (void)confirmWithCompletion:(id /* block */)a0;
- (void)invokePinTopCompletionWithResult:(long long)a0;
- (void)successBubbleShow:(long long)a0;
- (void)successBubbleDismiss:(long long)a0;
- (void)closeTaskWithResult:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)show:(long long)a0;
- (void)dismiss:(long long)a0;
- (id)initWithTaskID:(long long)a0;

@end
