@class IESLiveMicPosTagInfo, UIImageView, IESLiveUniformTag, UILabel, UIView;

@interface IESLiveMultiAudioKTVSingStatusView : UIView

@property (nonatomic) double scale;
@property (retain, nonatomic) UIView *bottomBgView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIImageView *waitingImageView;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isAfk;
@property (nonatomic) BOOL mcStatus;
@property (retain, nonatomic) IESLiveMicPosTagInfo *tagInfo;
@property (retain, nonatomic) IESLiveUniformTag *tagView;
@property (nonatomic) BOOL isShowTagView;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL isBackgroundMaskHidden;

- (void)makeConstraints;
- (void)updateTagInfo:(id)a0;
- (void)removeTag;
- (void)hideTag;
- (void)updateAfkStatus:(BOOL)a0;
- (id)initWithScale:(double)a0 isAnchor:(BOOL)a1;
- (void)updateMcStatus:(BOOL)a0;
- (void)updateUIWithCurrentStatus;
- (void)p_trackHostTag:(id)a0;
- (void)showTagView:(id)a0;
- (void)p_updateStatusView;
- (void)showStatusLabelWithString:(id)a0;
- (void)p_showTagView;
- (void)updateDarkBackgroundHidden:(BOOL)a0;
- (void)updateTitleLabelFont:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)hideStatus;

@end
