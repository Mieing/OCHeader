@class NSLock, NSString, CALayer, AWEGradientView, AWESearchSeedCardInfoView, BDWebImageRequestConfig, AWESearchSeedCardModel, BDImageView;
@protocol AWESearchSeedCardContentViewDelegate;

@interface AWESearchSeedCardContentView : UIView <AWESearchSeedCardInfoViewDelegate>

@property (retain, nonatomic) BDImageView *cover;
@property (retain, nonatomic) CALayer *imgSign;
@property (retain, nonatomic) AWESearchSeedCardInfoView *infoZone;
@property (retain, nonatomic) AWESearchSeedCardModel *model;
@property (retain, nonatomic) BDWebImageRequestConfig *bdConfig;
@property (retain, nonatomic) NSLock *diggLock;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (weak, nonatomic) id<AWESearchSeedCardContentViewDelegate> delegate;
@property (nonatomic) unsigned long long theme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (double)getImageViewHeightWithModel:(id)a0;
+ (id)creatAttributedStringWithModel:(id)a0;
+ (double)getRealScreenWidth;
+ (long long)syncGetAWESearchSeedShowCreateTime;
+ (double)getContentLabelHeightWithModel:(id)a0;
+ (double)heightForCardModel:(id)a0 width:(double)a1;

- (void)configUI;
- (void)onAwemeDiggNotification:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)digg;
- (void)updateWithCardModel:(id)a0;
- (void)p_diggWithModel;
- (void)updateCardFrame;
- (void)cancelDigg;
- (void)updateDiggStatus:(long long)a0 reset:(BOOL)a1 from:(BOOL)a2;
- (void)likeInfoClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
