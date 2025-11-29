@class IESLiveMyLiveVisitorEntryViewModel, UIImageView, NSArray, UIView, IESLiveCarouselLabel, NSTimer;

@interface IESLiveMyLiveVistorEntryView : UIView

@property (retain, nonatomic) IESLiveMyLiveVisitorEntryViewModel *viewModel;
@property (nonatomic) long long currentRecordIndex;
@property (retain, nonatomic) UIView *animationContainer;
@property (retain, nonatomic) UIImageView *visitorIconImgView;
@property (copy, nonatomic) NSArray *visitRecordsLabels;
@property (retain, nonatomic) IESLiveCarouselLabel *carouselLabelView;
@property (nonatomic) double recordMaxWidth;
@property (nonatomic) BOOL isExpand;
@property (retain, nonatomic) NSTimer *carouselTimer;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)displayVisitRecordsWithAnimationIfHas;
- (void)tapSelf:(id)a0;
- (void)doCarousel;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
