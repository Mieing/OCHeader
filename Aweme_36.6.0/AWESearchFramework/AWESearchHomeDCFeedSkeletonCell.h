@class NSString, AWEDCFeedConfig, UIView;

@interface AWESearchHomeDCFeedSkeletonCell : AWEDCFeedBaseCell <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) UIView *coverImage;
@property (retain, nonatomic) UIView *titleLabel;
@property (retain, nonatomic) UIView *userInfo;
@property (weak, nonatomic) AWEDCFeedConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)awe_themeDidChange:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)setupUI;
- (void)updateColor;

@end
