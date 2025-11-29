@class UILabel;

@interface AWEModernFeedInvalidOriginItemViewController : AWEModernFeedBaseCellController

@property (retain, nonatomic) UILabel *tipLabel;

+ (void)__awe__codeRunnerRun_27;

- (BOOL)alertIfNotValid;
- (void)didEndShowing;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)contentView;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;

@end
