@class NSString;
@protocol IESLiveCompoundSubscription;

@interface AWELiveRoomFinishedListener : NSObject <HTSLiveAudienceActions, AWELiveRoomFinishedListenerProtocol>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> actionDisposable;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRoomFinishedBlock:(id /* block */)a0;
- (void)liveDidFinished:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
