@class UIImageView, UILabel;
@protocol ACCOneKeyMvEntranceViewDelegate;

@interface ACCOneKeyMvEntranceView : UIView

@property (retain, nonatomic) UIImageView *oneKeyMvIcon;
@property (retain, nonatomic) UILabel *oneKeyMvTitle;
@property (retain, nonatomic) UILabel *oneKeyMvContent;
@property (retain, nonatomic) UIImageView *oneKeyMvArrow;
@property (weak, nonatomic) id<ACCOneKeyMvEntranceViewDelegate> delegate;

- (void)clickSelfView;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)init;
- (void)setupUI;

@end
