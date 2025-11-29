@class NSString, HybridRouterMap;

@interface HybridRouterPageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pageId;
@property (nonatomic) int bizType;
@property (retain, nonatomic) NSString *routerName;
@property (nonatomic) int routerType;
@property (retain, nonatomic) HybridRouterMap *routerArgs;
@property (nonatomic) int state;

+ (void)initialize;

@end
