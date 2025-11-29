@protocol CachalotRenderPipelineComponentViewModel, AWESearchCachalotCardViewProtocol;

@interface AWESearchCachalotGeneralInjectViewModel : NSObject

@property (nonatomic) unsigned long long viewType;
@property (nonatomic) unsigned long long siteType;
@property (retain, nonatomic) Class viewClass;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL resident;
@property (nonatomic) double height;
@property (retain, nonatomic) id<AWESearchCachalotCardViewProtocol> viewDelegate;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) BOOL needUpdate;

- (id)initWithViewType:(unsigned long long)a0 siteType:(unsigned long long)a1 viewClass:(Class)a2 priority:(long long)a3 resident:(BOOL)a4;
- (void).cxx_destruct;

@end
