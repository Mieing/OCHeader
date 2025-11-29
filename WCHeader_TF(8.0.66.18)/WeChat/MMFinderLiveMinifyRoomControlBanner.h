@class UIView, MMUIImageView, UITapGestureRecognizer, NSData, FinderJumpInfo, MMLiveTaskId, NSString, MMUILabel;

@interface MMFinderLiveMinifyRoomControlBanner : UIControl <UIGestureRecognizerDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUIImageView *imageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) BOOL isTransToFullScreen;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSData *minifyLastBuffer;
@property (weak, nonatomic) FinderJumpInfo *bannerInfo;
@property (weak, nonatomic) UIView *operationView;
@property (copy, nonatomic) id /* block */ getExtraTopMarginBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })viewSizeByBannerInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })expendViewSizeByBannerInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1;
- (void)initGesture;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)requestTransfromLiveRoomState;
- (void).cxx_destruct;

@end
