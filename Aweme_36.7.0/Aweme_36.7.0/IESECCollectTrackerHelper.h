@class NSString, IESECTracker, UIResponder, IESECCollectContext;

@interface IESECCollectTrackerHelper : NSObject <YataTrackService>

@property (retain, nonatomic) IESECTracker *tracker;
@property (weak, nonatomic) IESECCollectContext *context;
@property (weak, nonatomic) UIResponder *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackPageShow;
- (id)businessParams;
- (void)trackWithEventName:(id)a0 params:(id)a1;
- (void)trackWithEventName:(id)a0 once:(id)a1 params:(id)a2;
- (id)initWithContext:(id)a0 host:(id)a1;
- (void).cxx_destruct;

@end
