@class NSString;

@interface AWELiveCreateRoomPreCheckServiceImpl : NSObject <IESLiveCreateRoomPreCheckService>

@property (copy, nonatomic) id /* block */ createRoomBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)convertWith:(unsigned long long)a0;
- (BOOL)agreementDone;
- (void)useNewCertCompletionWithCertResult:(id)a0;
- (id /* block */)preCheckErrorHandler;
- (void)createRoomRequestHandler:(id /* block */)a0;
- (id)lastFeedVideoID;
- (id)lastFeedVideoTrackerParams;
- (void)updateAgreementStatus:(BOOL)a0;
- (void)addObserverForSyncCertificationStatus;
- (void).cxx_destruct;
- (id)init;

@end
