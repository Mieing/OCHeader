@class NSDictionary;

@interface SECLynxGlobalPropsContext : NSObject

@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) BOOL modified;

- (void).cxx_destruct;

@end
