@class NSString, TPPlayerAdapter;

@interface TPPlayerPictureInPictureHandler : NSObject <ITPPlayerAdapterHandler>

@property (weak, nonatomic) TPPlayerAdapter *adapter;
@property (nonatomic) long long state;
@property (nonatomic) long long prePlayerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerForAdapter:(id)a0;

- (BOOL)handleOnPrepared;
- (BOOL)handleStop;
- (long long)handleStartPictureInPicture;
- (long long)handleStopPictureInPicture;
- (BOOL)handlePictureInPictureStateDidChange:(long long)a0;
- (BOOL)handlePictureInPictureErrorDidOccur:(long long)a0;
- (void)restoreFromPipWithError:(long long)a0;
- (void).cxx_destruct;

@end
