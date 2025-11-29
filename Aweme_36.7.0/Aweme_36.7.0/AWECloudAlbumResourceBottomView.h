@class UIButton, UILabel, NSString;

@interface AWECloudAlbumResourceBottomView : UIView <ACCSelectedAssetsBottomViewProtocol>

@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForBottomView;

- (void)updateStateWith:(BOOL)a0;
- (void)makeConstraint;
- (void).cxx_destruct;
- (id)init;
- (id)customBackgroundColor;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
