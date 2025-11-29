@interface IESLiveDIOptimizeConfig : NSObject

@property (nonatomic) BOOL liveDIOptEnable;
@property (nonatomic) BOOL liveDILazyLoadEnable;
@property (nonatomic) BOOL liveDIServiceCache;
@property (nonatomic) BOOL protocolKeyOpt;

+ (id)config;

- (id)init;

@end
