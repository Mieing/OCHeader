@class NSString, AWEShareContext;
@protocol AWEShareStageDelegate, AWEShareView, AWEShareChannel;

@interface AWEShareBaseStage : NSObject <AWEShareStage>

@property (weak, nonatomic) id<AWEShareStageDelegate> delegate;
@property (readonly, nonatomic) AWEShareContext *context;
@property (readonly, nonatomic) id<AWEShareChannel> channel;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishThenContinue;
- (void)finishWithEnded;
- (void)finishWithCancelled;
- (void)willBecomeModal;
- (void)dismissViewIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finishWithResult:(unsigned long long)a0 error:(id)a1;
- (void)finishWithError:(id)a0;
- (void)run;

@end
