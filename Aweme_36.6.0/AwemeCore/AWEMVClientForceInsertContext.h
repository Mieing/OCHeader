@class NSArray, AWEMVDataRequestContext;

@interface AWEMVClientForceInsertContext : NSObject

@property (retain, nonatomic) NSArray *originalAwemeList;
@property (retain, nonatomic) AWEMVDataRequestContext *requestContext;
@property (nonatomic) BOOL isScreenContainsFirstRenderCache;
@property (nonatomic) BOOL isFromFirstRenderCache;
@property (nonatomic) BOOL isReplaceModeOfFirstRenderCache;

- (id)initWithAwemeList:(id)a0;
- (void).cxx_destruct;

@end
