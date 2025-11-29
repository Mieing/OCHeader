@class NSTimer, NSArray;

@interface AWEFormatInteractionModeApi : AWEFormatBaseApi

@property (nonatomic) unsigned long long switchDigitalModeRetryIndex;
@property (retain, nonatomic) NSTimer *switchDigitalModeRetryTimer;
@property (readonly, nonatomic) BOOL retryEnable;
@property (retain, nonatomic) NSArray *retryIntervals;

- (void)requestSwitchDigitalInteractionModeWithParams:(id)a0 requestSource:(id)a1 finish:(id /* block */)a2;
- (void)p_requestSwitchDigitalInteractionModeWithParams:(id)a0 requestSource:(id)a1 retry:(BOOL)a2 finish:(id /* block */)a3;
- (void)cancelSwitchDigitalInteractionModeRetry;
- (void)retrySwitchDigitalInteractionModeIfNeededWithParams:(id)a0 requestSource:(id)a1 finish:(id /* block */)a2 error:(id)a3 responseModel:(id)a4;
- (BOOL)shouldRetrySwitchModeRequestForError:(id)a0;
- (id)retryErrorCodeList;
- (void)cancelAllTimer;
- (void).cxx_destruct;
- (id)init;

@end
