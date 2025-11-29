@class UIImageView, UILabel;

@interface AWEFeedNearbyMallCardStyle2HeaderView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *horizontalLine;
@property (nonatomic) double headerTopPadding;
@property (nonatomic) double horizontalTopPadding;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) id /* block */ tapHandle;

- (void)__setupUI;
- (void)__addAction;
- (id)initWithHeaderTopPadding:(double)a0 horizontalTopPadding:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
