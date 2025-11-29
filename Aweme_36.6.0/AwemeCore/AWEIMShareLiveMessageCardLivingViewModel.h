@class AWEIMShareLiveMessageViewModel, NSString;

@interface AWEIMShareLiveMessageCardLivingViewModel : NSObject

@property (weak, nonatomic) AWEIMShareLiveMessageViewModel *shareLiveMessageViewModel;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long hiddenLivingView;

- (void)p_addKVO;
- (BOOL)p_isVoipEnable;
- (id)initWithShareLiveMessageViewModel:(id)a0;
- (void).cxx_destruct;

@end
