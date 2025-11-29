@class WCFinderLiveNpsSurveyFeedVM, NSString, UILabel, UIView, NSMutableArray;
@protocol WCFinderLiveHomePageNpsSurveyCellDelegate;

@interface WCFinderLiveHomePageNpsSurveyCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveNpsSurveyFeedVMDelegate, WCFinderLiveFeedGenericCardCellProtocol>

@property (retain, nonatomic) WCFinderLiveNpsSurveyFeedVM *feedVM;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL hasInit;
@property (retain, nonatomic) NSMutableArray *optionButtons;
@property (weak, nonatomic) id<WCFinderLiveHomePageNpsSurveyCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)updateWithFeedVM:(id)a0;
- (void)layoutSubviews;
- (void)willDisplay;
- (void)optionButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
