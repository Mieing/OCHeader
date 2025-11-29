@class NSDictionary, NSMutableArray, WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_navigateToMiniProgram : WAJSEventHandler_BaseEvent {
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
}

@property (nonatomic) BOOL customShowShareBtnOnTemplateNav;
@property (copy, nonatomic) id /* block */ customShareBtnActionBlock;
@property (retain, nonatomic) NSDictionary *extraParamInfo;
@property (retain, nonatomic) NSMutableArray *widgetParameters;

- (void)handleJSEvent:(id)a0;
- (void)navigateToMiniProgramWithParam:(id)a0 appID:(id)a1 userName:(id)a2 navigationController:(id)a3;
- (BOOL)checkNeedUseCustomParams;
- (void).cxx_destruct;

@end
