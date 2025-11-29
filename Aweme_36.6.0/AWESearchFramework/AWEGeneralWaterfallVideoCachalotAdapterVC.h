@class NSString;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWEGeneralWaterfallVideoCachalotAdapterVC : AWEGeneralWaterfallVideoCellController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)logExtraDict;
- (BOOL)shouldNotActive;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)getTrackBaseParams;
- (BOOL)isVideoTab;
- (BOOL)enableHigligtAbility;
- (void).cxx_destruct;
- (id)transitionContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)hasVideo;
- (id)componentView;
- (id)superview;
- (void)updateWithViewModel:(id)a0;
- (id)searchTab;

@end
