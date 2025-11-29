@class NSString, NSMutableDictionary;

@interface AWEIMLiveMessageExtendedCarouselComponent : AWEIMComponentBase <AWEIMLiveMessageExtendedCarouselComponentInterface, AWEIMLiveMessageExtendedInfoRoomRegistrationDelegate>

@property (retain, nonatomic) NSMutableDictionary *registeredLiveRooms;
@property (nonatomic) unsigned long long timerInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *conversationID;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)removeRegistrationWithRoomOwnerID:(id)a0;
- (void)registerMessageWithID:(id)a0 roomOwnerID:(id)a1 updateCallback:(id /* block */)a2;
- (void)unregisterMessageWithID:(id)a0 roomOwnerID:(id)a1;
- (void).cxx_destruct;

@end
