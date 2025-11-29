@class NSString, AWEVideoPublishViewModel;

@interface APCBaseInjectionHandler : NSObject <APCBaseInjectionHandlerProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtensionModelByClass:(id)a0;
- (id)initWithPublishModel:(id)a0;
- (void)setNativeConfigByClass:(id)a0;
- (id)trackPresetService;
- (void).cxx_destruct;

@end
