@class NSDictionary, NSString;

@interface AWEPlayInteractionComponentTrackManager : NSObject <AWEPlayInteractionComponentTrackManagerProtocol>

@property (retain, nonatomic) NSDictionary *componentTrackInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleComponentDetailPageEnterEventWithContextBuilder:(id /* block */)a0;
- (void)handleComponentDetailPageDismissEventWithContextBuilder:(id /* block */)a0;
- (void)handleComponentResetEventWithContextBuilder:(id /* block */)a0;
- (void)handleCommonComponentEnterEventWithContext:(id)a0;
- (void)handleCommonComponentDismissEventWithContext:(id)a0;
- (void)handleCommonComponentResetEventWithContext:(id)a0;
- (id)getTrackInfoModelListWith:(id)a0;
- (BOOL)isTrackContextInfoValid:(id)a0 withEnterEvent:(BOOL)a1;
- (id)getTrackInfoModelWithContext:(id)a0;
- (void)updateTrackInfoModelListWith:(id)a0 componentID:(long long)a1;
- (id)logInfoForCommonTrackInfoModelList:(id)a0;
- (void).cxx_destruct;

@end
