@class RichTextView, NSString, UIImageView, FinderObject, WCFinderDataItem, UIView, UILabel;
@protocol VoipRecentStatusProperties, VoipRecentStatusFinderBackgroundProtocol;

@interface VoipRecentStatusFinderCardView : VoipRecentStatusCardView <RichTextLayoutDelegate, VoipRecentStatusProperties>

@property (retain, nonatomic) FinderObject *finderObject;
@property (retain, nonatomic) WCFinderDataItem *wcFinderDataItem;
@property (retain, nonatomic) UIView<VoipRecentStatusProperties, VoipRecentStatusFinderBackgroundProtocol> *backgroundView;
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

- (id)initWithFinderObject:(id)a0 wcFinderDataItem:(id)a1;
- (void)layoutSubviews;
- (void)onClickOpenPageHotViewWithSender:(id)a0;
- (double)preferredHeight;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void)onTerminate;
- (void).cxx_destruct;

@end
