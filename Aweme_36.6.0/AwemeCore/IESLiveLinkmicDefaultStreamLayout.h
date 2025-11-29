@class HTSInteractionStreamAppData, NSString;
@protocol IESLiveInteractiveUserService;

@interface IESLiveLinkmicDefaultStreamLayout : NSObject <IESLiveInteractiveStreamLayout>

@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) id<IESLiveInteractiveUserService> userService;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (copy, nonatomic) id /* block */ onAppDataUpdated;
@property (copy, nonatomic) id /* block */ layoutProviderGetter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)appDataWithUserService:(id)a0;
- (void)configLayout:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (long long)viewIndexWithUser:(id)a0;
- (id)streamRegionWithLayoutRegion:(id)a0 userModel:(id)a1 session:(id)a2 userService:(id)a3;
- (void)updateWithPushGrids:(id)a0;
- (void)onAppDataUpdated:(id /* block */)a0;
- (id)layoutProvider;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
