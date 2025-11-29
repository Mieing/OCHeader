@class NSString;

@interface IESECShopSLIActionRegistry : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) id /* block */ handler;

+ (id)registryWithType:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
