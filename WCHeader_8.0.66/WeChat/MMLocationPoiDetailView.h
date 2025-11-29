@class UILabel, SnsPoiDetail, UIImageView, UIView, RichTextView, MMUILabel;
@protocol MMLocationPoiDetailViewDelegate;

@interface MMLocationPoiDetailView : UIView {
    SnsPoiDetail *_poiDetail;
}

@property (retain, nonatomic) RichTextView *priceTipsLabel;
@property (retain, nonatomic) RichTextView *businessHourLabel;
@property (retain, nonatomic) RichTextView *phoneLabel;
@property (retain, nonatomic) MMUILabel *noticeWordingLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *addressContainer;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) UIView *bottomBlankView;
@property (weak, nonatomic) id<MMLocationPoiDetailViewDelegate> delegate;
@property (nonatomic) BOOL showTakeCarBtn;
@property (nonatomic) BOOL shouldShowFullScreenEntrance;

+ (double)contentHeight:(id)a0 maxWidth:(double)a1 showTakeCarBtn:(BOOL)a2 isFinderHalfScreen:(BOOL)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)adjustLabelsPosition;
- (void)onTapAddressEntrance;
- (void)updateWith:(id)a0;
- (void).cxx_destruct;

@end
