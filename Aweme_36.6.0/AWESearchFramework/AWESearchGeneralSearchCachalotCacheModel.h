@class NSString, AWESearchHomeNewStyleSearchBarQueryContext;
@protocol CachalotRenderPipelineComponentViewModel, AWESearchActionListenerProtocol;

@interface AWESearchGeneralSearchCachalotCacheModel : NSObject

@property (copy, nonatomic) NSString *searchKeyword;
@property (nonatomic) double maxOffsetY;
@property (retain, nonatomic) AWESearchHomeNewStyleSearchBarQueryContext *queryContext;
@property (nonatomic) BOOL needFullPageHeader;
@property (weak, nonatomic) id<AWESearchActionListenerProtocol> listener;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> root;

- (void).cxx_destruct;

@end
