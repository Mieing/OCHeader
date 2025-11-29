@class NSDictionary;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchCachalotCardInsertModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long renderType;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) id dataModel;
@property (nonatomic) BOOL useLocateModelIndex;
@property (nonatomic) long long locateModelIndex;
@property (copy, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) id renderModel;
@property (copy, nonatomic) id /* block */ beforeInsertBlock;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> insertAfterAnchor;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> anchorViewModel;

- (void).cxx_destruct;

@end
