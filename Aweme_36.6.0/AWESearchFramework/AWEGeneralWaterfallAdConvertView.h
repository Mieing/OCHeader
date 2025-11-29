@class NSString, AWETagLabelModel, UILabel, UIView, AWEGeneralWaterfallAdLabel;

@interface AWEGeneralWaterfallAdConvertView : UIView

@property (nonatomic) BOOL isDarkStyle;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) AWEGeneralWaterfallAdLabel *adTagLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) NSString *tipText;
@property (retain, nonatomic) AWETagLabelModel *adLabelModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
