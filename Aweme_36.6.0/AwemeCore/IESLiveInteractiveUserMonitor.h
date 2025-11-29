@protocol IESLiveFullLinkMonitor;

@interface IESLiveInteractiveUserMonitor : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;

- (id)initWithDIContext:(id)a0 scene:(unsigned long long)a1;
- (unsigned long long)moduleForScene;
- (void)monitorInformationReport:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
