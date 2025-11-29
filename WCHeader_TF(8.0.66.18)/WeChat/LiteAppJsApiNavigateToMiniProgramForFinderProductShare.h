@interface LiteAppJsApiNavigateToMiniProgramForFinderProductShare : LiteAppJsApiLaunchMiniProgram

@property (copy, nonatomic) id /* block */ customShareBtnActionBlock;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)superInvokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id /* block */)getShareAction;
- (void).cxx_destruct;

@end
