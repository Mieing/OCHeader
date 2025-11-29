@class NSString, AWEPersonFeedVideoTagView;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWEPersonWaterfallImageSetCachalotAdapterVC : AWEGeneralWaterfallImageSetCellController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) AWEPersonFeedVideoTagView *leftTopTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)getWrapperedCellFrameWithModel:(id)a0;

- (id)logExtraDict;
- (BOOL)shouldNotActive;
- (id)getInflowExtra;
- (id)getTrackBaseParams;
- (BOOL)isBelongToPesonHomePageCard;
- (id)getCustomExtraInnerflowLog;
- (void)showVideoLeftTopTagWith:(id)a0;
- (id)personSearchExtraLog;
- (void).cxx_destruct;
- (id)transitionContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)hasVideo;
- (void)viewDidLoad;
- (id)componentView;
- (id)superview;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
