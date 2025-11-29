@class NSMutableSet;
@protocol MatrixPluginListenerDelegate;

@interface MatrixBuilder : NSObject

@property (retain, nonatomic) NSMutableSet *plugins;
@property (weak, nonatomic) id<MatrixPluginListenerDelegate> pluginListener;

- (id)init;
- (void)addPlugin:(id)a0;
- (id)getPlugins;
- (void).cxx_destruct;

@end
