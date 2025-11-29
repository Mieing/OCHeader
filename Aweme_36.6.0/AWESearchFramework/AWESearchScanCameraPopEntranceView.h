@class NSArray, AWESearchScanCameraPopEntranceImageView, NSString, UILabel, AWESearchScanCameraPopEntranceStyleModel;

@interface AWESearchScanCameraPopEntranceView : UIView <AWESearchScanCameraPopEntranceImageViewDelegate>

@property (retain, nonatomic) AWESearchScanCameraPopEntranceStyleModel *model;
@property (copy, nonatomic) NSArray *imageViewArr;
@property (copy, nonatomic) NSArray *imageArr;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) AWESearchScanCameraPopEntranceImageView *image1;
@property (retain, nonatomic) AWESearchScanCameraPopEntranceImageView *image2;
@property (retain, nonatomic) AWESearchScanCameraPopEntranceImageView *image3;
@property (retain, nonatomic) AWESearchScanCameraPopEntranceImageView *image4;
@property (copy, nonatomic) id /* block */ imageViewClickBlock;
@property (copy, nonatomic) id /* block */ imageDownLoadFailBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)imageDownload:(BOOL)a0;
- (void)imageClicked:(id /* block */)a0 imageModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
