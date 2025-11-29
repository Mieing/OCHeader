@class MMWebPluginNativeVideoJSContext, MMWebFinderPlayArgs;

@interface MMWebPluginNativeVideoContext : NSObject

@property (nonatomic) unsigned int viewId;
@property (nonatomic) BOOL bShouldResumeWhenAppear;
@property (nonatomic) BOOL needEvent;
@property (retain, nonatomic) MMWebPluginNativeVideoJSContext *jsContext;
@property (weak, nonatomic) MMWebFinderPlayArgs *finderPlayInfo;

- (id)initWithViewId:(unsigned int)a0;
- (BOOL)hasWebCompt;
- (void).cxx_destruct;

@end
