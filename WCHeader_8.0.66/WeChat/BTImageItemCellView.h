@class BTImageItemCellViewModel, CAGradientLayer, UIImageView, UIView, NSMutableArray, MMUILabel;

@interface BTImageItemCellView : BTReaderItemCellView <IDownloadImageExt> {
    CAGradientLayer *m_maskLayer;
    UIView *m_maskView;
}

@property (retain, nonatomic) NSMutableArray *webImgViewArr;
@property (retain, nonatomic) NSMutableArray *imgBtnArr;
@property (retain, nonatomic) UIImageView *imageIcon;
@property (retain, nonatomic) MMUILabel *imageNum;
@property (readonly, nonatomic) BTImageItemCellViewModel *viewModel;

- (void)initTopReaderItem;
- (void)initNormalReaderItem;
- (void)initCoverViews;
- (void)onUpdateViewModel;
- (unsigned long long)displayImageViewNum;
- (id)accessibilityLabel;
- (void)initNumLabelAndIcon;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (void)initCoverMaskLayer;
- (void).cxx_destruct;

@end
