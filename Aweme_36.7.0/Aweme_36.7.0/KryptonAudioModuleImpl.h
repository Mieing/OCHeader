@class NSString;
@protocol KryptonAudioUnitInvoker, KryptonAudioStatusListener;

@interface KryptonAudioModuleImpl : NSObject <KryptonAudioModule> {
    NSString *_engineType;
}

@property (retain, nonatomic) id<KryptonAudioUnitInvoker> audioUnitInvoker;
@property (weak, nonatomic) id<KryptonAudioStatusListener> audioStatusListener;
@property (readonly, nonatomic) NSString *engineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(id)a0;

@end
