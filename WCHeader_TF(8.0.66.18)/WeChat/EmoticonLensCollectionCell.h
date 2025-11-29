@class EmoticonLensInfo, UIColor, UIImageView, NSString, UIView, CircleProcessView, MMUILabel;

@interface EmoticonLensCollectionCell : UICollectionViewCell <EmoticonLensMgrExt>

@property (retain, nonatomic) UIView *iconBgView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) CircleProcessView *progressView;
@property (retain, nonatomic) EmoticonLensInfo *emoticonLensItem;
@property (nonatomic) unsigned long long scenes;
@property (nonatomic) BOOL isShowIconBackground;
@property (nonatomic) BOOL showSelectedBorder;
@property (nonatomic) BOOL showSelectedStatus;
@property (retain, nonatomic) UIColor *titleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onEmoticonLensPkgDownloadProgress:(double)a0 lensId:(id)a1;
- (void)onEmoticonLensPkgDownloadSuccess:(id)a0;
- (void)onEmoticonLensPkgDownloadFail:(id)a0;
- (void)onEmoticonLensIconDownloadSuccess:(id)a0;
- (void).cxx_destruct;

@end
