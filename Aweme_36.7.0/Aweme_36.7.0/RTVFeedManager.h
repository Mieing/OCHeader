@class RTVFeedWebService, NSString;
@protocol RTVStorageArea, RxInjector, RTVUserProfileManagerInterface;

@interface RTVFeedManager : NSObject <RTVFeedManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVFeedWebService *webService;
@property (readonly, nonatomic) id<RTVStorageArea> storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)reportFeedListCmdWithRoomID:(id)a0 roomType:(long long)a1 feedListCMD:(id)a2 roomFeature:(long long)a3;
- (id)activeInteractionWindow:(BOOL)a0 withRoomID:(id)a1;
- (id)pullFeedShareWithRoomID:(id)a0 roomType:(long long)a1;
- (id)requestHotFeedWithRoomID:(id)a0;
- (id)hasShowSupportLongVideoTips;
- (id)markHasShowSupportLongVideoTips;
- (void).cxx_destruct;

@end
