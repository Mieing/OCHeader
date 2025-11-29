@class IESLiveAudienceContainerContext;

@interface IESLiveAudienceStreamPlugin : IESLiveAudiencePlugin

@property (retain, nonatomic) IESLiveAudienceContainerContext *context;

- (id)roomModel;
- (void)reuseWithContext:(id)a0;
- (id)streamPlayer;
- (id)streamGuarder;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
