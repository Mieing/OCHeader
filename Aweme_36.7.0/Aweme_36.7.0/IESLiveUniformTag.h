@class IESLiveMicPosTagInfo, UIImageView, NSString, UILabel;

@interface IESLiveUniformTag : UIView

@property (retain, nonatomic) IESLiveMicPosTagInfo *tagInfo;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) NSString *linkUrl;
@property (nonatomic) long long tagType;

- (void)setTagString:(id)a0;
- (void)updateTagInfo:(id)a0;
- (void)didClickTag;
- (void)trackTagShow:(id)a0;
- (void)setBackgroundColorsARGBHexStr:(id)a0;
- (BOOL)isLinkPanel;
- (void)trackTagShow:(id)a0 extra:(id)a1;
- (BOOL)isAudioSeat;
- (BOOL)isVideoSeat;
- (void)p_updateBg;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setTagColor:(id)a0;

@end
