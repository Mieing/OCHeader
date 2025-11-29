@class NSString, UIImageView, UIView, UILabel, UIButton;

@interface IESLiveMediaAuditView : UIView <IESLiveAnchorMediaAuditActions>

@property (retain, nonatomic) UIView *mainContentView;
@property (retain, nonatomic) UIButton *startLiveButton;
@property (retain, nonatomic) UIImageView *finishedIcon;
@property (retain, nonatomic) UIImageView *reviewIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *instructionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setAuditStatus:(BOOL)a0;
- (void)startLive;
- (void).cxx_destruct;
- (void)setupUI;

@end
