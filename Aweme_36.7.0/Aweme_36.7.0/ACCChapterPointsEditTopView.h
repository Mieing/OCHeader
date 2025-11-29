@class DUXBaseLabel, DUXBaseButton, NSString;
@protocol ACCChapterPointsEditTopViewDelegate;

@interface ACCChapterPointsEditTopView : UIView

@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseButton *cancelButton;
@property (retain, nonatomic) DUXBaseButton *saveButton;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) id<ACCChapterPointsEditTopViewDelegate> delegate;

- (void)saveButtonAction;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelButtonAction;

@end
