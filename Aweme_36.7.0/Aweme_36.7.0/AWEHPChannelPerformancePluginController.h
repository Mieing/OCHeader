@class NSString;
@protocol AWEHPChannelControllerProtocol;

@interface AWEHPChannelPerformancePluginController : NSObject <AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToChannel:(id)a0;
+ (id)supportChannelIDArray;

@end
