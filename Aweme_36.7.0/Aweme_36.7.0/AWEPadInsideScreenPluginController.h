@class NSString;
@protocol AWEHPChannelControllerProtocol;

@interface AWEPadInsideScreenPluginController : NSObject <AWEHPChannelPluginControllerProtocol, AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (retain, nonatomic) id<AWEHPChannelControllerProtocol> controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelWillBeginRefreshWithModel:(id)a0;
- (void)channelDidEndRefreshWithModel:(id)a0;
- (BOOL)enableRefreshCrashFix;
- (void)dismissSplitScreen;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
