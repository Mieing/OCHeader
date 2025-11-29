@class NSDictionary;

@interface WAJSEventHandler_shareAppMessageToSpecificContactDirectly : WAJSEventHandler_shareAppMessageDirectly {
    NSDictionary *_dic;
}

@property (nonatomic) BOOL forNativeWeApp;

- (void)handleJSEvent:(id)a0;
- (void)doShareLogicWith:(id)a0 forNativeWeApp:(BOOL)a1;
- (void)transferOpenId:(id)a0 appId:(id)a1;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)handleShareTransID:(id)a0;
- (void)shareWithParams:(id)a0 username:(id)a1;
- (void).cxx_destruct;

@end
