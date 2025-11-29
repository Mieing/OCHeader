@class NSString, NSDictionary, AWESearchSchemaModel, UIViewController;

@interface AWESearchPreRequestParamsContextParamsObject : NSObject

@property (nonatomic) BOOL isPressPreRequest;
@property (nonatomic) BOOL isFrontRequest;
@property (retain, nonatomic) NSDictionary *initialProperties;
@property (retain, nonatomic) NSDictionary *extraLogParams;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) NSString *clientPrefetchType;
@property (retain, nonatomic) NSString *prefetchId;
@property (retain, nonatomic) AWESearchSchemaModel *routerModel;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSDictionary *predictFetchParams;
@property (retain, nonatomic) NSDictionary *preRequestCustomParams;
@property (nonatomic) BOOL needIsNewSession;

- (void).cxx_destruct;

@end
