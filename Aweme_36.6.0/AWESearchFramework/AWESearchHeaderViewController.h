@class UILabel, NSString;

@interface AWESearchHeaderViewController : UIViewController <AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun_27;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;

@end
