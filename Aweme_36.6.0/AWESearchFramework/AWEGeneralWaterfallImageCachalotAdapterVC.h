@class NSString;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWEGeneralWaterfallImageCachalotAdapterVC : AWEGeneralWaterfallImageSetCellController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (BOOL)shouldNotActive;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)getTrackBaseParams;
- (void).cxx_destruct;
- (BOOL)hasVideo;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
