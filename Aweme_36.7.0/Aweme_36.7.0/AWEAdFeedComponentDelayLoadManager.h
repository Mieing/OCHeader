@class AWEAdFeedComponentDelayLoadConfig, NSString;

@interface AWEAdFeedComponentDelayLoadManager : HTSService <AWEAdFeedComponentDelayLoadManager>

@property (retain, nonatomic) AWEAdFeedComponentDelayLoadConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleLokiComponentDelayLoadIfNeedWithModel:(id)a0;
- (void)handleMannorComponentDelayLoadIfNeedWithModel:(id)a0;
- (double)fetchLynxButtonDelayTimeWithModel:(id)a0;
- (double)fetchNAButtonDelayTimeWithModel:(id)a0;
- (id)handleMannorComponentDelayLoadWithModel:(id)a0;
- (id)handleLokiComponentDelayLoadWithDict:(id)a0;
- (BOOL)enablePureWithModel:(id)a0;
- (BOOL)enableWithModel:(id)a0;
- (void).cxx_destruct;

@end
