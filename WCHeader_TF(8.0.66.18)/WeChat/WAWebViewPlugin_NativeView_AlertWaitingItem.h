@class NSDictionary;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_NativeView_AlertWaitingItem : MMObject

@property (retain, nonatomic) NSDictionary *param;
@property (weak, nonatomic) id<IWAWebViewPluginDelegate> delegate;

- (void).cxx_destruct;

@end
