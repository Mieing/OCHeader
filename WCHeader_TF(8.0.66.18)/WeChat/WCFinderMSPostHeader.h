@class UILabel, UIView, WCFinderHeadImageView;
@protocol WCFinderMSPostHeaderDelegate;

@interface WCFinderMSPostHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) WCFinderHeadImageView *avatarView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIView *inputBackgroundView;
@property (retain, nonatomic) UILabel *inputHintLabel;
@property (weak, nonatomic) id<WCFinderMSPostHeaderDelegate> delegate;

+ (double)headerHeight;

- (id)initWithReuseIdentifier:(id)a0;
- (void)setupSubviews;
- (void)setupLayout;
- (void)onClickInputView;
- (void).cxx_destruct;

@end
