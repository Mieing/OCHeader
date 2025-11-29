@class RTVVoipMonitor, RTVVoipModel, RTVVoipWebService;

@interface __RTVVoIPPatchTask : NSObject

@property (readonly, nonatomic) RTVVoipModel *model;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) RTVVoipWebService *webService;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (nonatomic) unsigned long long patchCount;

- (id)__patch:(id)a0;
- (id)initWithVoIPModel:(id)a0 webService:(id)a1 monitor:(id)a2;
- (BOOL)needPatchWithLastTask:(id)a0;
- (void).cxx_destruct;
- (id)start;

@end
