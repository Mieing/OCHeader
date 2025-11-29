@class LynxUIContext, NSString;

@interface LynxAnimaXResourceFactoryService : NSObject <AnimaXResourceFactoryService>

@property (weak, nonatomic) LynxUIContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAnimaXLoaders;
- (id)initWithLynxUIContext:(id)a0;
- (void).cxx_destruct;

@end
