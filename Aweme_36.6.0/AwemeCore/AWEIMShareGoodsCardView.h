@class UIView, NSString, CAShapeLayer, AWEIMMessageUIExtraInfo, UILabel, AWEIMRefreshImageView, UIButton;

@interface AWEIMShareGoodsCardView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UIButton *followBtn;
@property (nonatomic) BOOL isSendFromMe;
@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (retain, nonatomic) AWEIMMessageUIExtraInfo *messageUIExtraInfo;
@property (retain, nonatomic) AWEIMRefreshImageView *cardAvatarImageView;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (copy, nonatomic) NSString *conversationID;

+ (double)ShareViewNoImageViewH;
+ (double)separateViewH;
+ (double)topOffset;
+ (double)leadingOffset;

- (void)p_chatBackgroundDidChangeNty:(id)a0;
- (void)p_updateBubbleLayer;
- (void)p_setupNoImageUI;
- (void)p_configShareCardViewWithTitle:(id)a0 discountPrice:(id)a1 content:(id)a2 hint:(id)a3 cardAvatarURLModel:(id)a4 cardAvatarImage:(id)a5 cardAvatarDefaultImage:(id)a6 cardAvatarRadius:(double)a7;
- (void)p_remakeLayout:(BOOL)a0;
- (id)initWithCardViewStyle:(unsigned long long)a0 sendFromMe:(BOOL)a1;
- (void)configShareCardViewWithTitle:(id)a0 discountPrice:(id)a1 content:(id)a2 hint:(id)a3 cardAvatarURLModel:(id)a4 cardAvatarImage:(id)a5 cardAvatarDefaultImage:(id)a6 cardAvatarRadius:(double)a7;
- (void).cxx_destruct;
- (void)dealloc;

@end
