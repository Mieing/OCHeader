@class AWESearchSeedCardViewInfoView, NSLock, NSString, AWESearchSeedCardModel, UIView, BDWebImageRequestConfig, BDImageView;
@protocol AWESearchSeedImageTextContentViewDelegate;

@interface AWESearchSeedImageTextContentView : UIView <AWESearchSeedCardViewInfoViewDelegate>

@property (retain, nonatomic) UIView *coverZone;
@property (retain, nonatomic) BDImageView *cover;
@property (retain, nonatomic) BDImageView *imgSign;
@property (retain, nonatomic) AWESearchSeedCardViewInfoView *infoZone;
@property (retain, nonatomic) AWESearchSeedCardModel *model;
@property (retain, nonatomic) BDWebImageRequestConfig *bdConfig;
@property (retain, nonatomic) NSLock *diggLock;
@property (weak, nonatomic) id<AWESearchSeedImageTextContentViewDelegate> delegate;
@property (nonatomic) unsigned long long theme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getImageViewHeightWithModel:(id)a0;
+ (long long)syncGetAWESearchSeedShowCreateTime;
+ (double)getContentLabelHeightWithModel:(id)a0;
+ (double)heightForCardModel:(id)a0 width:(double)a1;

- (void)awe_themeWillChange:(long long)a0;
- (void)configUI;
- (void)onAwemeDiggNotification:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)digg;
- (void)updateWithCardModel:(id)a0;
- (struct CGSize { double x0; double x1; })getSizeWithImageView:(id)a0;
- (id)creatAttributedStringWithModel:(id)a0;
- (void)p_diggWithModel;
- (void)cancelDigg;
- (void)updateDiggStatus:(long long)a0 reset:(BOOL)a1 from:(BOOL)a2;
- (void)likeInfoClick;
- (void)clickPersonLink:(id)a0;
- (void)clickChallengeLink;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
