@class NSString;

@interface ACCCutsameTemplateMonitor : NSObject <VideoTemplateMonitorDelegate>

@property (nonatomic) unsigned long long currentTemplateSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackService:(id)a0 params:(id)a1;
- (id)initWithTemplateSource:(unsigned long long)a0;

@end
