@class UILabel, NSString;

@interface AWEIMFansContentContainer : AWEIMFansBaseContainer <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *assemblyContentLabel;
@property (retain, nonatomic) UILabel *leaveMsgLabel;
@property (retain, nonatomic) UILabel *followTimeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentText;
- (void)udpateLeaveMsgLabel;
- (void)udpateFollowTimeLabel;
- (void)updateAssemblyContentLabel;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
