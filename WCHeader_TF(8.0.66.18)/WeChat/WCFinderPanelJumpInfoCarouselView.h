@class NSMutableDictionary, WCFinderNetIconTextBtn, UILabel, MMWebImageView, WCFinderJumpInfo;
@protocol WCFinderPanelJumpInfoCarouselViewDelegate;

@interface WCFinderPanelJumpInfoCarouselView : UIView

@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) WCFinderNetIconTextBtn *jumpButton;
@property (nonatomic) int showPosition;
@property (weak, nonatomic) id<WCFinderPanelJumpInfoCarouselViewDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *actionDic;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showPosition:(int)a1;
- (void)resetUIState;
- (void)jumpButtonClicked;
- (void)updateWithBGMJumpInfo:(id)a0 contentVM:(id)a1;
- (void)bindSessionReportFromJumpInfo:(id)a0 contentVM:(id)a1;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
