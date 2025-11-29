@interface AWEIMGroupChatPanelControllerCommand : NSObject

@property (copy, nonatomic) id /* block */ run;

+ (id)commandWithActionType:(long long)a0 bizExtension:(id)a1;
+ (id)transferToSelectToCreatePanelWithBizExtension:(id)a0;
+ (id)transferToInputConvNameToCreatePanelWithBizExtension:(id)a0;
+ (id)transferToShareCodeToCreatePanelWithBizExtension:(id)a0;
+ (id)transferToFaceToFaceCreatePanelWithBizExtension:(id)a0;
+ (id)transferToJoinGroupPanelWithBizExtension:(id)a0;

- (void)__run:(id)a0;
- (void)run:(id)a0 inScheduler:(id)a1;
- (id)initWithRun:(id /* block */)a0;
- (void).cxx_destruct;
- (void)run:(id)a0;

@end
