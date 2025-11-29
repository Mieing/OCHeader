@class NSString, AWEFeedLiveChannelController;

@interface AWELiveChannelControllerManager : NSObject <AWELiveChannelControllerService>

@property (weak, nonatomic) AWEFeedLiveChannelController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showliveTabPinTopViewWithMessage:(id)a0;
- (id)channelEnterParams;
- (void).cxx_destruct;

@end
