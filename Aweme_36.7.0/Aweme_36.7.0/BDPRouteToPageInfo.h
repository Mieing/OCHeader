@class NSMutableArray;

@interface BDPRouteToPageInfo : NSObject

@property (retain, nonatomic) NSMutableArray *routeToIDList;
@property (retain, nonatomic) NSMutableArray *routeToPathList;

- (BOOL)addRouteID:(id)a0 pagePath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
