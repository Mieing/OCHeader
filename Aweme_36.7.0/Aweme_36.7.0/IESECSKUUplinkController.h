@class NSDictionary, IESECSKUUplinkDataHelper, NSString;
@protocol IESECSKUUplinkControllerDelegate;

@interface IESECSKUUplinkController : NSObject <IESECSKUUplinkController>

@property (weak, nonatomic) id<IESECSKUUplinkControllerDelegate> delegate;
@property (retain, nonatomic) IESECSKUUplinkDataHelper *dataHelper;
@property (retain, nonatomic) NSDictionary *queryParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSkipTriggersWithGlobalTriggers:(id)a0 moduleTriggers:(id)a1;
- (unsigned long long)addAndGetCurVersion;
- (unsigned long long)getCurVersion;
- (BOOL)updateInstanceAfterQuery:(id)a0 queryVersion:(long long)a1;
- (BOOL)canShowLoading:(id)a0;
- (BOOL)handleResponseWithYataInstance:(id)a0 eventTrigger:(id)a1 uplinkParams:(id)a2 uplinkResponse:(id)a3;
- (void)cacheUplinkResponse:(id)a0;
- (BOOL)handleTrigger:(id)a0;
- (void)p_delegateTrackErrorType:(id)a0 errorParams:(id)a1;
- (void)updateInstanceAfterQuery:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
