@class UIImageView, NSString;

@interface ACCCustomStickerCollectionViewCell : ACCFunctionStickerCollectionViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (nonatomic) BOOL isLoad;
@property (copy, nonatomic) NSString *lastId;

- (void)configCellWithInfoStickerModel:(id)a0 compeletion:(id /* block */)a1;
- (void)configCellWithEffectModel:(id)a0;
- (void)configCellWithCoverImage;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setDownloadStatus:(unsigned long long)a0;
- (void)updateDownloadProgress:(double)a0;

@end
