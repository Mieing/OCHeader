@protocol IESServiceProvider;

@interface ACCJSRuntimeContext : NSObject

@property (weak, nonatomic) id<IESServiceProvider> recorderServiceProvider;
@property (weak, nonatomic) id<IESServiceProvider> editorServiceProvider;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
