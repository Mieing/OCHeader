@class NSString, NSTimer, NSMutableDictionary, NSArray, NSObject;
@protocol AWEIMLiveMessageExtendedInfoRoomRegistrationDelegate;

@interface AWEIMLiveMessageExtendedInfoRoomRegistration : NSObject

@property (retain, nonatomic) NSString *roomOwnerID;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableDictionary *registeredLiveCards;
@property (retain, nonatomic) NSArray *currentItems;
@property (weak, nonatomic) NSObject<AWEIMLiveMessageExtendedInfoRoomRegistrationDelegate> *delegate;

- (void)p_timerFired;
- (void)p_updateWithItems:(id)a0;
- (id)initWithRoomOwnerID:(id)a0 delegate:(id)a1;
- (void)registerMessageWithID:(id)a0 updateCallback:(id /* block */)a1;
- (void)unregisterMessageWithID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startTimerWithInterval:(long long)a0;

@end
