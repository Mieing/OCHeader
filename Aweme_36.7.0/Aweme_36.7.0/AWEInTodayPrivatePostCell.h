@class NSShadow, UIImageView, AWEInTodayPrivatePostModel, UILabel, UIView, NSString;

@interface AWEInTodayPrivatePostCell : UICollectionViewCell <DUXActionSheetDelegate, AWEInTodayPrivatePostCellProtocol>

@property (retain, nonatomic) UIImageView *inTodayCoverImageView;
@property (retain, nonatomic) UIView *inTodayTitleBGView;
@property (retain, nonatomic) UILabel *inTodayTitleLabel;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) UIView *inTodayAccessibilityView;
@property (retain, nonatomic) AWEInTodayPrivatePostModel *inTodayModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)longPressGestureRecognized:(id)a0;

@end
