@class NSString, UIImageView, AWEDCFeedPageContext, AWEAwemeModel, UIImage;

@interface AWEMVCardRightTopIconResourceView : UIView <AWEDCFeedCellImageElementResourceViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *longVideoImage;
@property (retain, nonatomic) UIImage *imageAlbumImage;
@property (retain, nonatomic) UIImage *livePhotoImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
