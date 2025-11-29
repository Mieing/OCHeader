@class NSString, AWELiveAudienceAccessContext, IESLiveBackgroundView;

@interface AWELiveAudienceAccessBackgroundPlugin : NSObject <AWELiveAudienceAccessPluginProtocol>

@property (retain, nonatomic) AWELiveAudienceAccessContext *context;
@property (retain, nonatomic) IESLiveBackgroundView *liveBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBackgroundView;
- (void)stageDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)createBackgroundView;

@end
