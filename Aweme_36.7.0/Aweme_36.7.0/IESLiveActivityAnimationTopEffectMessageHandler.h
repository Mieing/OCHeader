@class NSString;
@protocol IESLiveRoomService, IESLiveActivityAnimationMessageHandlerDelegate;

@interface IESLiveActivityAnimationTopEffectMessageHandler : NSObject <IESLiveActivityAnimationMessageHandlerProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveActivityAnimationMessageHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareAssetWithAssetId:(long long)a0 completion:(id /* block */)a1;
- (BOOL)isRoleEffect:(id)a0;
- (BOOL)roleEffect:(id)a0 triggeredByCurrentUser:(id)a1;
- (void)prepareMixedInfoWithImage:(id)a0 text:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)currentTimestamp;
- (void)handleMessage:(id)a0 completion:(id /* block */)a1;

@end
