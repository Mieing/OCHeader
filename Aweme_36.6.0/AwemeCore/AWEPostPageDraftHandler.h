@class NSNumber, NSString;
@protocol ACCSequenceEditServiceProtocol, AWEPostPageContext;

@interface AWEPostPageDraftHandler : NSObject <AWEPostPageDraftService>

@property (retain, nonatomic) id<AWEPostPageContext> context;
@property (retain, nonatomic) NSNumber *saveDraftStateSignal;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)saveDraft:(id /* block */)a0;
- (BOOL)saveDraftIfNeed:(id /* block */)a0;
- (void)saveDraft:(id)a0 needNotification:(BOOL)a1 presaveHandler:(id /* block */)a2 completion:(id /* block */)a3 backup:(BOOL)a4;
- (void)saveDraft:(id /* block */)a0 backup:(BOOL)a1;
- (void)savePollImageToDisk;
- (void)saveOrignalDraftWithCompletion:(id /* block */)a0;
- (void)beginSaveDraft;
- (void)endSaveDraft;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)initData;
- (void)deleteDraft;

@end
