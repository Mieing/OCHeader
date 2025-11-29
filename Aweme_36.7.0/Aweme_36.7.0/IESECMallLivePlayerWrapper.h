@class IESECMallLivePlayer, NSString, UIView;
@protocol IESECMallLivePlayerWrapperDelegate;

@interface IESECMallLivePlayerWrapper : NSObject <IESECShopLivePlayerDelegate>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESECMallLivePlayer *livePlayer;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) BOOL continuePlay;
@property (weak, nonatomic) id<IESECMallLivePlayerWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dequeuePlayerWithRoomID:(id)a0 streamData:(id)a1;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)enqueuePlayer;
- (void)updateWithStreamData:(id)a0 roomID:(id)a1 streamOptions:(id)a2;
- (void).cxx_destruct;
- (void)play;
- (id)init;
- (void)stop;
- (void)setMute:(BOOL)a0;

@end
