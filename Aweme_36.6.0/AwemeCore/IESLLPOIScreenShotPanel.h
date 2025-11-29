@class IESLLPOIScreenShootPanelSheet, NSArray, UIImageView, UIImage, UILabel, UIView, AWEPOICollectObject;

@interface IESLLPOIScreenShotPanel : UIViewController

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *itemContainerView;
@property (copy, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) AWEPOICollectObject *collectObject;
@property (nonatomic) BOOL isFavorited;
@property (weak, nonatomic) IESLLPOIScreenShootPanelSheet *sheet;
@property (copy, nonatomic) id /* block */ onFavoriteBlock;

- (void)shareToIMMessage;
- (void)shareToWe1chat;
- (void)onTapFavorite;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
