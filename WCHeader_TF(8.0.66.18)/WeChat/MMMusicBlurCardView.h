@class NSString, UIImageView, UIImage, MMWebImageView, UILabel;

@interface MMMusicBlurCardView : UIControl <MMWebImageViewDelegate> {
    unsigned long long _bizScene;
    MMWebImageView *_coverImageView;
    UIImageView *_blurBgView;
    UIImageView *_blurCoverView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property (retain, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSString *descStr;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) UIImage *coverImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBizScene:(unsigned long long)a0;
- (void)reload;
- (void)initCoverImageView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)updateCoverImage;
- (void)updateBlurBgView;
- (id)blurEffectAlbumImage;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
