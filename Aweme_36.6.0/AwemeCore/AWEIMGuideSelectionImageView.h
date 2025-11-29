@class UITapGestureRecognizer;
@protocol AWEIMGuideSelectionImageViewDelegate;

@interface AWEIMGuideSelectionImageView : UIImageView

@property (retain, nonatomic) UITapGestureRecognizer *selectionTap;
@property (nonatomic) BOOL isSelected;
@property (weak, nonatomic) id<AWEIMGuideSelectionImageViewDelegate> delegate;

- (void)changeSelected;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
