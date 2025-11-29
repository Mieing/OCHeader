@class UIImageView;

@interface BrandMultiImageCoverView : UIStackView

@property (retain, nonatomic) UIImageView *leftCoverImageView;
@property (retain, nonatomic) UIImageView *middleCoverImageView;
@property (retain, nonatomic) UIImageView *rightCoverImageView;

- (id)init;
- (id)createCoverImageView;
- (void)setupUI;
- (void)updateWithImageURLs:(id)a0 appMsgUrl:(id)a1;
- (void).cxx_destruct;

@end
