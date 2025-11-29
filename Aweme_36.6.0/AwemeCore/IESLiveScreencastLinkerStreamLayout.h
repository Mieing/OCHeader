@class HTSInteractionStreamAppData, NSString;

@interface IESLiveScreencastLinkerStreamLayout : NSObject <IESLiveInteractiveStreamLayout>

@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)appDataWithUserService:(id)a0;
- (id)buildStreamRegionWithSessions:(id)a0;
- (id)streamRegionByLayoutRegion:(id)a0;
- (void).cxx_destruct;

@end
