@class NSString, AWEAwemeModel, UILabel, NSMutableArray, UIView;

@interface AWESearchAdAlbumGridView : UIView <AWESearchAdNewAlbumViewProtocol>

@property (retain, nonatomic) NSMutableArray *imageViewsArray;
@property (nonatomic) long long lastTapIndex;
@property (retain, nonatomic) UIView *moreOverlay;
@property (retain, nonatomic) UILabel *moreOverlayText;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double maxWidth;
@property (nonatomic) double containerWidth;
@property (nonatomic) BOOL shouldUseSmallPic;
@property (copy, nonatomic) id /* block */ albumTappedWithIndex;
@property (copy, nonatomic) id /* block */ albumSliderCheckMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAwemeModel:(id)a0;
- (void)buildCornerRadius;
- (void)moreOverlayTapped;
- (void)setupImagesView;
- (long long)getMaxDisplayImageCount;
- (void)updateImageFrame;
- (void)updateMoreOverlay;
- (void)trackOthershow;
- (id)initWithContainerWidth:(double)a0;
- (double)getGridViewWidth;
- (void).cxx_destruct;
- (void)setupUI;

@end
