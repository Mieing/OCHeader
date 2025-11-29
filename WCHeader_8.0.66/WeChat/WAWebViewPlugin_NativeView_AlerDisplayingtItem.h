@class WAAlertDialog;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_NativeView_AlerDisplayingtItem : MMObject

@property (retain, nonatomic) WAAlertDialog *alert;
@property (weak, nonatomic) id<IWAWebViewPluginDelegate> delegate;

- (void).cxx_destruct;

@end
