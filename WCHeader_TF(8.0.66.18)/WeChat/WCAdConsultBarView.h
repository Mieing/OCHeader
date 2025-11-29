@class WCDataItem, WCAdAlphaButton, WCAdConsultBarCarouselInfo, WCAdURLImageView, WCAdConsultBarInfo, MMUILabel;

@interface WCAdConsultBarView : WCAdBaseBarView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdConsultBarCarouselInfo *consultCarouselInfo;
@property (nonatomic) unsigned long long itemScene;
@property (retain, nonatomic) WCAdAlphaButton *titleButton;
@property (retain, nonatomic) MMUILabel *currentTitleLabel;
@property (retain, nonatomic) MMUILabel *nextTitleLabel;
@property (retain, nonatomic) WCAdAlphaButton *consultButton;
@property (retain, nonatomic) WCAdURLImageView *iconImageView;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) WCAdConsultBarInfo *currentConsultBarInfo;

+ (double)topMargin:(id)a0 maxWidth:(double)a1;
+ (double)bottomMargin;
+ (double)viewHeight:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (void)initSubviews;
- (double)titleButtonWidth;
- (id)createTitleLabelWithIndex:(long long)a0;
- (void)updateConsultBarToIndex:(long long)a0;
- (void)updateTitleButtonUI;
- (void)updateConsultButton;
- (void)onTitleButtonClicked:(id)a0;
- (void)onConsultButtonClicked:(id)a0;
- (id)consultBarLogic;
- (void).cxx_destruct;

@end
