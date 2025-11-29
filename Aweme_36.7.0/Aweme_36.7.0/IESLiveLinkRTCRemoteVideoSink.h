@class NSString;
@protocol IESLiveLinkRTCRemoteVideoSinkDelegate;

@interface IESLiveLinkRTCRemoteVideoSink : NSObject <ByteRTCVideoSinkDelegate>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) BOOL enableVideoFrameCallbackOptimize;
@property (weak, nonatomic) id<IESLiveLinkRTCRemoteVideoSinkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrame:(id)a0;
- (void).cxx_destruct;

@end
