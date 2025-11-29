@class UILabel, MMWebImageView;
@protocol WCContentItemFinderLinkStyleViewModelProtocol;

@interface WCContentItemFinderLinkStyleView : WCContentItemBaseView

@property (retain, nonatomic) id<WCContentItemFinderLinkStyleViewModelProtocol> viewModel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;
+ (double)_edgeMargin;
+ (double)_iconLength;

- (id)initWithViewModel:(id)a0;
- (void)_setupUI;
- (void)_setupLayout;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)_onTapFavoritesButton;
- (double)_elementMargin;
- (double)_elementVerticalMargin;
- (void).cxx_destruct;

@end
