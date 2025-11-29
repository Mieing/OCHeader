@class CachalotLayoutUIInfoModel, NSArray, NSString, NSDictionary, CachalotContext;
@protocol CachalotRenderPipelineComponentViewModel, CachalotLayout;

@interface CachalotNodeViewModelBuildConfig : NSObject

@property (copy, nonatomic) NSArray *children;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> parent;
@property (retain, nonatomic) id<CachalotLayout> nodeLayout;
@property (retain, nonatomic) CachalotLayoutUIInfoModel *nodeUIInfo;
@property (copy, nonatomic) NSString *nodeId;
@property (retain, nonatomic) id dataModel;
@property (retain, nonatomic) id renderModel;
@property (copy, nonatomic) NSDictionary *logData;
@property (nonatomic) long long renderType;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) CachalotContext *comContext;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL forceSticky;
@property (nonatomic) double topStickyThreshold;
@property (nonatomic) BOOL upThanHeader;

- (void).cxx_destruct;

@end
