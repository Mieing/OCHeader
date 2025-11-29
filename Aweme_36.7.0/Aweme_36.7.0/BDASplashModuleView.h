@class BDASplashViewUtils, NSDictionary, NSArray, NSMutableArray;

@interface BDASplashModuleView : UIView

@property (nonatomic) BOOL isComplete;
@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) long long style;
@property (retain, nonatomic) BDASplashViewUtils *viewUtils;
@property (copy, nonatomic) NSArray *videoList;
@property (copy, nonatomic) NSArray *videoExtraInfoList;
@property (retain, nonatomic) NSMutableArray *videoViewArray;
@property (copy, nonatomic) NSArray *imageList;
@property (copy, nonatomic) NSArray *imageExtraInfoList;
@property (retain, nonatomic) NSMutableArray *imageViewArray;
@property (copy, nonatomic) NSArray *titleList;
@property (retain, nonatomic) NSMutableArray *titleViewArray;

- (void)addCustomView;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resourceSize:(struct CGSize { double x0; double x1; })a1 config:(id)a2;
- (void)addImageView;
- (void)addTitleView;
- (void)applyGreyThemeWithImage:(id)a0;
- (void)addVideoView;
- (void)viewLayoutWithPoint:(struct CGPoint { double x0; double x1; })a0 locationType:(long long)a1 view:(id)a2;
- (void).cxx_destruct;
- (void)updateConfig;

@end
