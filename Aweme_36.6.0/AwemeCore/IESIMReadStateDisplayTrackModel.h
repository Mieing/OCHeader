@class NSString, NSObject;
@protocol IESIMConversationProtocol, IESIMReadStateDisplayTrackDelegate, OS_dispatch_semaphore;

@interface IESIMReadStateDisplayTrackModel : NSObject

@property (nonatomic) unsigned long long page;
@property (weak, nonatomic) id<IESIMConversationProtocol> conv;
@property (copy, nonatomic) NSString *trackedListKey;
@property (copy, nonatomic) NSString *trackedReadStateMessageId;
@property (copy, nonatomic) NSString *trackedReadStateCountStr;
@property (nonatomic) double delayTime;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly, nonatomic) BOOL shouldTrack;
@property (weak, nonatomic) id<IESIMReadStateDisplayTrackDelegate> delegate;

- (id)initWithPage:(unsigned long long)a0 conv:(id)a1;
- (void)trackIfNeedForMessage:(id)a0 stateStr:(id)a1;
- (id)messageRecoardWithMsgId:(id)a0;
- (void)delayCheckForMessage:(id)a0 stateStr:(id)a1;
- (void)p_delayCheckReadStateTrack:(id)a0;
- (void)p_uploadReadStateDisplayed:(id)a0 stateStr:(id)a1;
- (void)p_trackEventForMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
