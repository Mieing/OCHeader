@class NSString;

@interface HybridRouterOpenParams : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *handlerId;
@property (nonatomic) int bizType;
@property (retain, nonatomic) NSString *routerName;
@property (nonatomic) int routerType;

+ (void)initialize;

@end
