@class UIButton;
@protocol AFDFriendsTabTemplateDetailBottomContainerViewDelegate;

@interface AFDFriendsTabTemplateDetailBottomContainerView : UIView

@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *confirmButtonNewStyle;
@property (retain, nonatomic) UIButton *collectButton;
@property (weak, nonatomic) id<AFDFriendsTabTemplateDetailBottomContainerViewDelegate> delegate;
@property (nonatomic) BOOL hasCollection;

+ (double)height;

- (void)confirmButtonDidClicked:(id)a0;
- (void)collectButtonDidClicked:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hasCollect:(BOOL)a1;
- (void)updateWithConfirmButtonText:(id)a0 image:(id)a1;
- (void)updateNewStyleCollectBtnWithActionType:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
