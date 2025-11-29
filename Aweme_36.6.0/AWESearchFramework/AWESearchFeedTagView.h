@class UIView, NSString, CALayer, AWESearchStickerModel, UIButton, UIImageView, UITextField, UILabel;

@interface AWESearchFeedTagView : UIView <AWESearchTagProtocol>

@property (retain, nonatomic) CALayer *animationLayer;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *searchIconImage;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWESearchStickerModel *searchTagModel;
@property (nonatomic) struct CGSize { double width; double height; } textRect;
@property (nonatomic) BOOL isReverse;
@property (retain, nonatomic) UITextField *secureTextField;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL enableScreenShotSecure;
@property (copy, nonatomic) id /* block */ closeButtonClickHandler;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } closeButtonFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCloseButton;
- (void)showHeartAnimation;
- (id)fetchTagName;
- (BOOL)getPauseTagCloseButtonEnable:(id)a0;
- (void)updateSearchEcomIconImage;
- (id)fetchTagImageURL;
- (void)updateWithModel:(id)a0 isReverse:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
