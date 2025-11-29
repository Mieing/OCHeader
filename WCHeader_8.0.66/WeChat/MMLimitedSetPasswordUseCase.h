@class MMLimitedModeSetPasswordLogic, NSString;

@interface MMLimitedSetPasswordUseCase : NSObject <MMLimitedModeSetPasswordLogicDelegate>

@property (retain, nonatomic) MMLimitedModeSetPasswordLogic *setPasswordLogic;
@property (copy, nonatomic) id /* block */ resolve;
@property (retain, nonatomic) id selfHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)wechatClearPassword;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)a0 ticket:(id)a1 success:(BOOL)a2 errMsg:(id)a3;
- (void).cxx_destruct;

@end
