@class UIView, MMWebImageView, NSString, UIImageView, RichTextView, CContact, MMUILabel, SightIconView;

@interface BTMinimizeSnapshotView : MMUIView

@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) UIView *audioBGView;
@property (retain, nonatomic) UIView *audioPlayViewBGView;
@property (retain, nonatomic) UIImageView *audioPlayView;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) BOOL isShowLargeCover;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *coverImgURL;

- (id)initWithReaderItemCellViewModel:(id)a0 contact:(id)a1;
- (void)configWithReaderItemViewMode:(id)a0;
- (id)initWithRecAppMsgViewModel:(id)a0 contact:(id)a1;
- (void)configWithRecAppMsgItemViewMode:(id)a0;
- (id)snapshotImage;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)rootViewConfigure;
- (double)rootViewPaddingTop;
- (void)configureReaderLayout;
- (void)configureVideoLayout;
- (void)configureTextLayout;
- (void)configurePicLayout;
- (void)configureAudioLayout;
- (void).cxx_destruct;

@end
