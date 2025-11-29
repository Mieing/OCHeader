@class AWECommentSingleInfoView, AWEGDRateFeedRawData, UIImageView, UILabel, UIView, AWECommentMultiPicView;

@interface AWEGDImageRateContentView : UIView

@property (retain, nonatomic) UIView *normalContentView;
@property (retain, nonatomic) UIView *commentTitleArea;
@property (retain, nonatomic) UILabel *commentTitleLabel;
@property (retain, nonatomic) UILabel *commentTitleGoodRateLabel;
@property (retain, nonatomic) UILabel *commentTitleGoodRateInfoLabel;
@property (retain, nonatomic) AWECommentMultiPicView *multiPicView;
@property (retain, nonatomic) UIView *singleInfoViewContainer;
@property (retain, nonatomic) AWECommentSingleInfoView *singleInfoViewLine1;
@property (retain, nonatomic) AWECommentSingleInfoView *singleInfoViewLine2;
@property (retain, nonatomic) UIView *bottomSplit;
@property (retain, nonatomic) UIImageView *bottomSplitImage;
@property (retain, nonatomic) UIView *bottomContentView;
@property (retain, nonatomic) UILabel *bottomContentTextLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) AWEGDRateFeedRawData *contentData;
@property (nonatomic) BOOL useScaleStyle;
@property (copy, nonatomic) id /* block */ trackEventBlock;

- (void)trackCommentView:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
