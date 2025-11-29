@class NSString, AWEHPPinTopUIContext, AWEHPPinTopObserverManager;
@protocol AWEPzEngineProtocol;

@interface AWEHPPinTopComponentManager : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (nonatomic) long long showingCount;
@property (retain, nonatomic) AWEHPPinTopUIContext *pinTopUIContext;
@property (retain, nonatomic) AWEHPPinTopObserverManager *observerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void)generatePinTopTaskWithModel:(id)a0 completion:(id /* block */)a1;
- (void)asyncShowPinTopComponentWithChannelID:(id)a0 componentConfig:(id)a1 task:(id)a2 showOnVC:(id)a3 showResult:(id /* block */)a4 resultCompletion:(id /* block */)a5;
- (void)handlePinTopCompletionWithTask:(id)a0 result:(long long)a1;
- (id)generateBusinessContextWithUIContext:(id)a0;
- (void)handlePinTopComponentShowWithTask:(id)a0 result:(long long)a1;
- (void)handlePinTopComponentDismissWithTask:(id)a0 type:(long long)a1;
- (void)handlePinTopComponentConfirmWithTask:(id)a0;
- (void)handlePinTopSuccessBubbleShowWithTask:(id)a0 result:(long long)a1;
- (void)p_allNewTryPinTopWithModel:(id)a0 completion:(id /* block */)a1;
- (id)p_generatePinTopComponentUIWithConfig:(id)a0;
- (void)showPinTopUIWithContext:(id)a0;
- (id)createPinTopTask;
- (void).cxx_destruct;
- (id)init;

@end
