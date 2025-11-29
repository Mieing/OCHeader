@class UIImageView, UIView, UILabel, UIButton;
@protocol EmoticonBoardCameraEmoticonEntryViewDelegate;

@interface EmoticonBoardCameraEmoticonEntryView : MMUIView {
    BOOL shouldShowNewYearUI;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIImageView *effectView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) id<EmoticonBoardCameraEmoticonEntryViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)addNewYearEffect;
- (void)refreshView;
- (void)onCameraEmoticonCreateButtonClicked;
- (void).cxx_destruct;

@end
