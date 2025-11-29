@class AWEAwemeModel, UIView, NSString, AWEBinding, UIImageView, AWEDCFeedBaseSectionViewModel, UILabel, AWEDCFeedPageContext;

@interface AWEDCFeedCreationDiggResource : NSObject <AWEDCFeedCellElementResourceProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) AWEBinding *diggTitleObserver;
@property (retain, nonatomic) AWEBinding *diggIconObserver;
@property (weak, nonatomic) AWEDCFeedBaseSectionViewModel *sectionVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)themeDidChange:(long long)a0;
- (void)addGesture;
- (void)addDiggObserver;
- (double)likeIconWidthHeight;
- (id)undiggedImage;
- (void)updateLikeString;
- (void)didTapDigg;
- (id)likeStringWithAwemeModel:(id)a0;
- (double)likeNumberFontSize;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;
- (struct CGSize { double x0; double x1; })size;
- (void)setupViews;

@end
