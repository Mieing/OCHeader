@class MMTextStateMediaItem, NSString;

@interface TextStateMediaBackgroundView : UIImageView <MMTextStateMediaDownloadImageCdnMgrExt>

@property (retain, nonatomic) MMTextStateMediaItem *mediaItem;
@property (nonatomic) BOOL useCustomBlurEffect;
@property (nonatomic) long long customBlurEffectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refresh;
- (void)onTextStateMediaThumbDownloadSuccess:(id)a0;
- (void)onTextStateMediaThumbDownloadFail:(id)a0;
- (void)updateImage:(id)a0 effectCacheKey:(id)a1;
- (void).cxx_destruct;

@end
