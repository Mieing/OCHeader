@interface IESIMThreadAutoShowKeyBoardComponent : AWEIMComponentBase {
    void /* unknown type, empty encoding */ blockService;
    void /* unknown type, empty encoding */ inputModuleService;
    void /* unknown type, empty encoding */ rootMsgService;
    void /* unknown type, empty encoding */ hasShowed;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_afterFirstRender;
- (void).cxx_destruct;
- (id)init;

@end
