@protocol IESLiveFullLinkMonitor;

@interface IESLiveInteractiveLinkMonitor : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;

- (id)initWithDIContext:(id)a0 scene:(unsigned long long)a1;
- (void)monitorWithJSON:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3 extra:(id)a4;
- (void)monitorWithPB:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3 extra:(id)a4;
- (void)appendResponseDictWith:(id)a0 apiJSONResponse:(id)a1;
- (void)appendResponseDictWith:(id)a0 apiPBResponse:(id)a1;
- (unsigned long long)p_moduleForScene;
- (void)monitorAPI:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3 extra:(id)a4;
- (void)monitorLinkMessage:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
