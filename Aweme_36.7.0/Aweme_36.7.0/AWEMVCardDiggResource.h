@class AWEAwemeModel, UIView, UIImage, NSString, AWEBinding, UIImageView, AWEDCFeedPageContext, UILabel;

@interface AWEMVCardDiggResource : NSObject <AWEMVCardViewResourceProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) AWEBinding *diggTitleObserver;
@property (retain, nonatomic) AWEBinding *diggIconObserver;
@property (retain, nonatomic) UIImage *heartFilledImage;
@property (retain, nonatomic) UIImage *heartOutlinedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeDidChange:(long long)a0;
- (BOOL)enableImageReuse;
- (void)addDiggObserver;
- (void)updateLikeString;
- (id)likeStringWithAwemeModel:(id)a0;
- (id)initWithContext:(id)a0 model:(id)a1;
- (void)refreshWithAwemeModel:(id)a0 context:(id)a1 containerElement:(id)a2;
- (id)cardRightBottomUIConfigModel;
- (double)iconSize;
- (void).cxx_destruct;
- (void)updateLabelFont;
- (void)reset;
- (void)setupViews;

@end
