@class UIImageView, NSString;

@interface AWEUserLoginThemeHeaderView : UIView

@property (retain, nonatomic) UIImageView *halfScreenThemeHeadView;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *themeId;
@property (nonatomic) BOOL isPadOpaque;

- (void)p_monitorLoadImage:(unsigned long long)a0 duration:(double)a1 imageURL:(id)a2 imageType:(id)a3 activityId:(id)a4 error:(id)a5;
- (id)initWithHeadUrl:(id)a0 themeId:(id)a1 isPadOpaque:(BOOL)a2;
- (void)setupHalfScreenThemeHeadView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
