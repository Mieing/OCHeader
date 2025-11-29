@class NSString;

@interface AWELivePreStreamEnterRoomCoreDataProvider : NSObject <AWELivePreStreamEnterRoomDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (BOOL)shouldEnterLiveRoomWithContext:(id)a0;

@end
