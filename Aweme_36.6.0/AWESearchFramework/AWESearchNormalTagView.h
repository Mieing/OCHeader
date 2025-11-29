@class UIFont, UIColor, UIImageView, AWEAnchorNormalInfoModel, NSString, YYLabel;

@interface AWESearchNormalTagView : UIView <AWESearchTagViewUIInfoProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleYYLabel;
@property (retain, nonatomic) AWEAnchorNormalInfoModel *anchorModel;
@property (nonatomic) BOOL isQuality;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *lineColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verticalLine;
- (void)setupUIWithModel:(id)a0;
- (id)getAnchorText;
- (void)reuseAnchor;
- (void)updateWithModel:(id)a0 isQuality:(BOOL)a1;
- (void).cxx_destruct;

@end
