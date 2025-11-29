@class NSString, NSMutableDictionary;

@interface IESECLynxCardPerfMonitor : NSObject

@property (nonatomic) long long createTime;
@property (retain, nonatomic) NSMutableDictionary *updateFlag;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) BOOL disableCardMonitor;

- (id)getUrlQueryItem:(id)a0 url:(id)a1;
- (id)getSceneTagWithURL:(id)a0;
- (id)monitorLynxCardSetup:(id)a0 resource:(id)a1;
- (id)monitorLynxCardUpdate:(id)a0 updateTiming:(id)a1 resource:(id)a2;
- (id)p_perfInfoWithSetupInfo:(id)a0 updateTiming:(id)a1 resource:(id)a2;
- (void)p_reportLynxCardPerfInfo:(id)a0;
- (id)p_filterUpdateTiming:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
