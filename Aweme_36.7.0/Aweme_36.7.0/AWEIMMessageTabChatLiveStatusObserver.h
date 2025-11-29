@class NSString, NSHashTable;

@interface AWEIMMessageTabChatLiveStatusObserver : NSObject

@property (retain, nonatomic) NSString *convID;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (readonly, nonatomic) long long liveStatus;

- (void)updateLiveStatusInfo:(id)a0;
- (BOOL)subscribersIsEmpty;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (id)initWithChat:(id)a0;

@end
