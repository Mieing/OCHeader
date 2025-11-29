@class UIButton, NSString;

@interface IESLiveScreenMultiFunctionBtnFragment : IESLiveRoomComponent <IESLiveScreenMultiFunctionBtnProvider>

@property (retain, nonatomic) UIButton *portraitButton;
@property (nonatomic) long long portraitButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)getPortraitButtonWithType:(long long)a0;
- (void)addPortraitButtonToSuperViewWithType:(long long)a0;
- (void).cxx_destruct;

@end
