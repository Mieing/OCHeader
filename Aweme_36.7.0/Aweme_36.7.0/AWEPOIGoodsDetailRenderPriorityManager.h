@class AWEGoodsDetailPageContext, NSMutableDictionary;
@protocol DitoLynxExtensionProtocol;

@interface AWEPOIGoodsDetailRenderPriorityManager : NSObject

@property (readonly, nonatomic) BOOL shouldOptimize;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (weak, nonatomic) id<DitoLynxExtensionProtocol> ditoLynxExtension;
@property (nonatomic) unsigned long long strategyType;
@property (nonatomic) BOOL isFullScreenStatus;
@property (nonatomic) unsigned long long curPriority;
@property (nonatomic) BOOL preRenderFinished;
@property (nonatomic) double curHeight;
@property (nonatomic) unsigned long long recursionCount;
@property (retain, nonatomic) NSMutableDictionary *tagToHeightMap;
@property (nonatomic) double pageHeight;

- (void)didEndReload;
- (void)ditoExtension:(id)a0 didReceiveSizeChangeWithViewTag:(id)a1;
- (void)ditoExtensionDidPreloadLynx:(id)a0;
- (void)optimizeLynxRenderPriority:(id)a0;
- (id)initWithContext:(id)a0 isFullScreenStatus:(BOOL)a1 lynxExtension:(id)a2;
- (void)setupLynxExtension:(id)a0;
- (void)optimizeLynxRenderPriorityDefaultStrategy:(id)a0;
- (void)optimizeLynxRenderPriorityNewStrategy:(id)a0;
- (void)updatePriority;
- (void).cxx_destruct;

@end
