@class WCDataItem, NSString, UIImageView, UILabel, UIView, RichTextView;
@protocol VoipRecentStatusProperties;

@interface VoipRecentStatusSNSCardView : VoipRecentStatusCardView <RichTextLayoutDelegate, VoipRecentStatusProperties>

@property (retain, nonatomic) WCDataItem *wcDataItem;
@property (retain, nonatomic) UIView<VoipRecentStatusProperties> *backgroundView;
@property (retain, nonatomic) UILabel *publishLabel;
@property (retain, nonatomic) UIImageView *publishArrowLabel;
@property (retain, nonatomic) RichTextView *descriptionRichTextView;
@property (retain, nonatomic) UILabel *positionLabel;
@property (retain, nonatomic) UIView *openPageHotView;
@property (copy, nonatomic) id /* block */ didClickSoundButtonCallback;
@property (copy, nonatomic) id /* block */ didSlideImagesCallback;
@property (copy, nonatomic) id /* block */ didClickOpenPageButtonCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isSoundBtnHidden;
@property (nonatomic) BOOL shouldPlaySound;
@property (nonatomic) BOOL isVisable;

- (id)initWithWCDataItem:(id)a0;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)onClickOpenPageHotViewWithSender:(id)a0;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
