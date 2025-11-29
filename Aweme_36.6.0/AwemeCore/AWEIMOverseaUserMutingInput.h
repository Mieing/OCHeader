@class AWEIMOverseaUserMutingFakeInputVC, NSString, UILabel, UIView;

@interface AWEIMOverseaUserMutingInput : AWEIMComponentBase <AWEIMMessageListInputModuleInterface>

@property (retain, nonatomic) AWEIMOverseaUserMutingFakeInputVC *fakeInputView;
@property (retain, nonatomic) UILabel *overseaCountDownLabel;
@property (retain, nonatomic) UIView *blockBackgroudView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)changeTypeToText;
- (void).cxx_destruct;
- (long long)currentInputType;
- (id)inputVC;

@end
