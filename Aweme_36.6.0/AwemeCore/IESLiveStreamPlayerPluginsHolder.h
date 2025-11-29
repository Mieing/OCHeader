@class NSArray, NSSet;

@interface IESLiveStreamPlayerPluginsHolder : NSObject

@property (retain, nonatomic) NSArray *holders;
@property (retain, nonatomic) NSArray *flatPlugins;
@property (retain, nonatomic) NSSet *activityPluginNames;

- (void)addPlugins:(id)a0;
- (BOOL)containsPlugin:(id)a0;
- (void)compact;
- (void).cxx_destruct;
- (id)init;

@end
