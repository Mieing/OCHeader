@class NSString;
@protocol WKKryptonAudioUnitInvoker;

@interface WKKryptonAudioModuleImpl : NSObject <WKKryptonAudioModule>

@property (retain, nonatomic) id<WKKryptonAudioUnitInvoker> audioUnitInvoker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
