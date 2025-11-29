@class RedDot, TableCellViewData, MMBadgeView, UIView, UIImage, KindaRichLabelViewV2, WCPayRoundTextViewDataView, WCPayWebImageView;
@protocol WCPayVoidCallbackDelegate, WCPayTableCellViewNumberExt;

@interface WCPayTableCellViewDataView : UIView

@property (retain) TableCellViewData *viewData;
@property (retain) RedDot *m_reddot;
@property (retain, nonatomic) UIView *m_background;
@property (retain) WCPayWebImageView *m_icon;
@property (retain, nonatomic) KindaRichLabelViewV2 *m_title;
@property (retain) WCPayRoundTextViewDataView *m_tagView;
@property (retain) KindaRichLabelViewV2 *m_subTitle;
@property (retain) KindaRichLabelViewV2 *m_desc;
@property (retain) KindaRichLabelViewV2 *m_subDesc;
@property (retain) WCPayWebImageView *m_rightIcon;
@property (retain) MMBadgeView *m_reddotImageView;
@property (retain) UIView *m_lineView;
@property (weak) id<WCPayVoidCallbackDelegate> m_delegate;
@property (retain) UIImage *m_rightIconImage;
@property (retain) UIView *m_numberView;
@property BOOL hasLine;
@property (weak) id<WCPayTableCellViewNumberExt> numberDelegate;
@property BOOL sizeAdaptFont;

+ (double)dyCellHeight:(double)a0 sizeAdaptFont:(BOOL)a1;
+ (double)contentHeightWithViewData:(id)a0 width:(double)a1 titleLinesOfNonSubTitle:(int)a2;
+ (double)contentHeightWithViewData:(id)a0 width:(double)a1 titleLinesOfNonSubTitle:(int)a2 sizeAdaptFont:(BOOL)a3;

- (double)dyLen:(double)a0;
- (double)dyCellHeight:(double)a0;
- (void)updateViewData:(id)a0 RedDot:(id)a1 delegate:(id)a2;
- (void)updateViewData:(id)a0 RedDot:(id)a1 delegate:(id)a2 rightIcon:(id)a3;
- (id)getDescView;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateNumberView;
- (void)updateBackground;
- (void)updateIcon;
- (void)updateTitle;
- (void)updateSubTitle;
- (void)updateTagView;
- (BOOL)hasTag;
- (void)updateRedDotImageView;
- (void)updateDesc;
- (void)updateSubDesc;
- (void)updateDescVertical;
- (void)updateTitleVertical;
- (void)updateRightIcon;
- (void)updateLineView;
- (void)setTitleLines:(int)a0;
- (id)getAccessibilityLabelString;
- (BOOL)isReddotLayoutOnRight;
- (void).cxx_destruct;

@end
