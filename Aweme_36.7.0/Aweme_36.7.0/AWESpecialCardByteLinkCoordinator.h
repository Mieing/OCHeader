@class AWESpecialCardByteLinkSubscriber;
@protocol AWESpecialCardByteLinkCoordinatorProtocol;

@interface AWESpecialCardByteLinkCoordinator : NSObject

@property (retain, nonatomic) AWESpecialCardByteLinkSubscriber *subscriber;
@property (weak, nonatomic) id<AWESpecialCardByteLinkCoordinatorProtocol> delegate;

+ (BOOL)enableByteLink;
+ (BOOL)bytelinkEnterForegroundSubscribe;
+ (long long)bytelinkWindowLeftInterval;

- (void)addSubscriber;
- (id)getLiveIMByteLinkService;
- (void)updatePublishers:(id)a0 triggerReason:(id)a1 enterFrom:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
