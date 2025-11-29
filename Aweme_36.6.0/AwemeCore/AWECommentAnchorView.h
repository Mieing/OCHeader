@class NSString, UIImageView, UILabel, UIView;

@interface AWECommentAnchorView : UIView <AWECommentAnchorViewProtocol>

@property (copy, nonatomic) id /* block */ tapAnchorView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *extraLabel;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (nonatomic, getter=isShowingExtraLabel) BOOL showingExtraLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCommentAnchorModel:(id)a0;
- (void)tapAnchor;
- (void)p_setupUI;
- (void)updateIconWidth:(double)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
