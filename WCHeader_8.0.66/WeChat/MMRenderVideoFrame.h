@class NSMutableDictionary, UIImageView, NSString, NSMutableArray;

@interface MMRenderVideoFrame : NSObject <TRTCVideoRenderDelegate>

@property (retain, nonatomic) UIImageView *localVideoView1;
@property (retain, nonatomic) NSMutableDictionary *userVideoViews1;
@property (retain, nonatomic) NSMutableArray *remoteVideoQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addUser:(id)a0 videoView:(id)a1;
- (void)onRenderVideoFrame:(id)a0 userId:(id)a1 streamType:(long long)a2;
- (id)getRemoteVideo:(id)a0;
- (void).cxx_destruct;

@end
