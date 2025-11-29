@class NSString, UIImageView, UILabel, UIButton;

@interface AWEReplaceMusicReportView : UIView <AWEReplaceMusicReportViewProtocol>

@property (retain, nonatomic) UILabel *illegalDescLabel;
@property (retain, nonatomic) UIButton *replaceButton;
@property (retain, nonatomic) UIButton *foldButton;
@property (retain, nonatomic) UIImageView *warningImage;
@property (retain, nonatomic) UILabel *tapToDetailLabel;
@property (nonatomic) long long editStatus;
@property (nonatomic) BOOL isFolded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubviews;
- (void)layoutFoldButton;
- (void)foldingAction;
- (id)initWithAudioStatus:(long long)a0;
- (void)updateLayoutWithAudioStatus:(long long)a0 isFold:(BOOL)a1;
- (double)getIntrinsicHeightOfPanel;
- (void)updateLayoutIllegalDescLabel;
- (void)updateLayoutReplaceButton;
- (void)updateLayoutFoldButton;
- (void)layoutIllegalDescLabel;
- (void)layoutReplaceButton;
- (void)layoutWarningImage;
- (void)layoutTapToDetailLabel;
- (void)unfoldViewAnimation;
- (void)foldViewAnimation;
- (void)foldButtonAnimation;
- (void).cxx_destruct;

@end
