@class NSString, AWELiveFeedLabelInfoModel, UIImageView, UILabel, UITapGestureRecognizer;

@interface AWELiveFeedLabelTagView : UIView <AWELiveFeedLabelTagProtocol>

@property (retain, nonatomic) AWELiveFeedLabelInfoModel *infoModel;
@property (retain, nonatomic) UIImageView *backGroundImage;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *iconView1;
@property (retain, nonatomic) UIImageView *iconView2;
@property (retain, nonatomic) UIImageView *iconView3;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL bgImgFinish;
@property (nonatomic) BOOL freeTrailFinsh;
@property (copy, nonatomic) id /* block */ labelTagClickBlock;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setupWithModel:(id)a0 completion:(id /* block */)a1;
- (void)cleanSubview;
- (double)bigFontLength:(double)a0;
- (void)layoutTextLabel;
- (struct CGSize { double x0; double x1; })bigFontSize:(struct CGSize { double x0; double x1; })a0;
- (void)updaCountTimeForPaidLive:(double)a0 isPaid:(BOOL)a1;
- (void)setupSpliceLabelWithCompletion:(id /* block */)a0;
- (void)setupWholeLabelWithCompletion:(id /* block */)a0;
- (void)setupProfilePicSpliceLabelWithCompletion:(id /* block */)a0;
- (void)layoutSpliceLabel;
- (long long)characterNumber:(id)a0 len:(long long)a1;
- (void)p_loadIconWithNum:(long long)a0 dispatchGroup:(id)a1 avatarItemList:(id)a2;
- (long long)characterNumber:(id)a0;
- (id)subTextString:(id)a0 len:(long long)a1;
- (void)layoutProfileSpliceLabel;
- (void)setupWithModel:(id)a0 countDownTime:(double)a1 isPaid:(BOOL)a2 viewRight:(unsigned long long)a3 isVIPPaidStream:(BOOL)a4 completion:(id /* block */)a5;
- (void)setTagClickBlock:(id /* block */)a0;
- (void)enableTapWithClickBlock:(id /* block */)a0;
- (void)recommendTagRemoveTagGesture;
- (void).cxx_destruct;
- (id)textFont;
- (id)init;
- (void)hide;
- (void)show;
- (void)handleTapGesture:(id)a0;

@end
