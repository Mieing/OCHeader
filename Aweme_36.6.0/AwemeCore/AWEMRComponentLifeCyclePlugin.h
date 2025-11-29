@class NSString, NSMutableArray;

@interface AWEMRComponentLifeCyclePlugin : NSObject <AWEHPChannelPluginControllerProtocol, AWEMRComponentLifeCyclePluginProtocol>

@property (retain, nonatomic) NSMutableArray *channelBlockList;
@property (retain, nonatomic) NSMutableArray *bottomChannelBlockList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharePlugin;

- (void)bottomChannel:(id)a0 bubbleShowWithResult:(id)a1 model:(id)a2;
- (void)channel:(id)a0 bubbleShowWithResult:(id)a1 model:(id)a2;
- (void)addChannelBubbleShowMonitorWithInfo:(id /* block */)a0;
- (void)addBottomChannelBubbleShowMonitorWithInfo:(id /* block */)a0;
- (void)sendChannelBubbleShowInfoWithChannel:(id)a0 bubbleShowWithResult:(id)a1 model:(id)a2;
- (void)sendBottomChannelBubbleShowInfoWithChannel:(id)a0 bubbleShowWithResult:(id)a1 model:(id)a2;
- (void)removeChannelBubbleShowMonitorInfoCallBack;
- (void)removeBottomChannelBubbleShowMonitorInfoCallBack;
- (void).cxx_destruct;

@end
