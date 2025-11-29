@class AWESearchAIGCChatVideoContainer, NSString, AWESearchAIGCChatImageContainer, UIButton, UIImageView, UILabel, AWESearchAIGCQueryTextContainer;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCQueryView : AWESearchCachalotBaseCardView <AWESearchAIGCShareProtocol, AWESearchAIGCChatImageContainerDelegate>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> bindViewModel;
@property (copy, nonatomic) NSString *lastViewModelId;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (retain, nonatomic) AWESearchAIGCQueryTextContainer *textContainer;
@property (retain, nonatomic) AWESearchAIGCChatImageContainer *imageContainer;
@property (retain, nonatomic) AWESearchAIGCChatVideoContainer *videoContainer;
@property (retain, nonatomic) UIButton *errorButton;
@property (retain, nonatomic) UIImageView *shareIsSelectedImageView;
@property (retain, nonatomic) UILabel *debugLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (unsigned long long)viewTypeForViewModel:(id)a0;
+ (struct CGSize { double x0; double x1; })textQuerySizeWithViewModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })mixQuerySizeWithViewModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })videoQuerySizeWithViewModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })videoOnlySizeWithViewModel:(id)a0 width:(double)a1;
+ (double)getQueryViewTopMarginWithViewModel:(id)a0;
+ (unsigned long long)resultViewControllerQueryStyleWithViewModel:(id)a0;

- (BOOL)shareEnable;
- (id)bubbleModel;
- (void)bindActions;
- (unsigned long long)resultViewControllerQueryStyle;
- (BOOL)debugModel;
- (void)textQueryUpdateWithViewModel:(id)a0;
- (void)mixQueryUpdateWithViewModel:(id)a0;
- (void)videoQueryUpdateWithViewModel:(id)a0;
- (void)videoOnlyUpdateWithViewModel:(id)a0;
- (id)shareSearchID;
- (void)shareBegin;
- (void)shareEnd;
- (void)shareDidSelected;
- (void)shareCancelSelected;
- (void)imageContainerDidSwitchQuestionToIndex:(long long)a0;
- (BOOL)enableSearchAIPadStyle;
- (void)errorButtonClick;
- (void)updateHeightAndRender;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)createUI;

@end
