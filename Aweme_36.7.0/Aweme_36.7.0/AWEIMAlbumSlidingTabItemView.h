@class UILabel, NSString;
@protocol AWEIMAlbumSlidingTabItemViewDelegate;

@interface AWEIMAlbumSlidingTabItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *text;
@property (nonatomic, setter=isSelected:) BOOL selected;
@property (weak, nonatomic) id<AWEIMAlbumSlidingTabItemViewDelegate> delegate;

- (void)p_setupViews;
- (void)p_setupConstraint;
- (void)p_updateLabelText:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
