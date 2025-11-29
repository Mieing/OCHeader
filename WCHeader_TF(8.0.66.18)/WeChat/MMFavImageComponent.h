@class MMUIImageView, NSString, NSMutableArray, MMWebImageView, MMCDNImageView, MMUILabel;
@protocol MMFavImageComponentDelegate;

@interface MMFavImageComponent : MMComponent <MMMusicPlayerContollerDelegate, FavTingPlayButtonDelegate> {
    MMUIImageView *m_thumbImageView;
    MMCDNImageView *m_cdnImageView;
    MMWebImageView *m_webImageView;
    MMUILabel *m_ocrLabel;
    NSMutableArray *m_arrKVOImageView;
}

@property (weak, nonatomic) id<MMFavImageComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calHeightWithComData:(id)a0;

- (void)configContentLayout;
- (void)configImage;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configPlayButton:(id)a0;
- (void)configTingBtn:(id)a0 comData:(id)a1;
- (void)configMusicBtn:(id)a0 shareItem:(id)a1;
- (id)getThumbView;
- (id)getImgView;
- (id)getThumbImageWithDataFmt:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (BOOL)enableTingListMode;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1;
- (void)didClickPlay:(id)a0;
- (void).cxx_destruct;

@end
