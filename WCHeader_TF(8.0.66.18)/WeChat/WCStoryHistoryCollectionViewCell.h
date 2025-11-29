@class MMUIImageView, WCStoryMediaItem, WCStoryDataUnit, UIImage, NSString, MMUILabel;

@interface WCStoryHistoryCollectionViewCell : UICollectionViewCell <WCStoryDownloadImageCdnMgrExt>

@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) MMUIImageView *thumbImageView;
@property (retain, nonatomic) WCStoryMediaItem *mediaItem;
@property (retain, nonatomic) MMUILabel *countLabel;
@property (retain, nonatomic) WCStoryDataUnit *dataUnit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)tryLoadThumbImage;
- (void)onStoryThumbDownloadSuccess:(id)a0;
- (void)onStoryThumbDownloadFail:(id)a0;
- (void).cxx_destruct;

@end
