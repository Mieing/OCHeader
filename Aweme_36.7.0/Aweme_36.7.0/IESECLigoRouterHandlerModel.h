@class NSString, IESECLigoContext, NSDictionary;

@interface IESECLigoRouterHandlerModel : NSObject

@property (copy, nonatomic) NSString *params;
@property (retain, nonatomic) IESECLigoContext *ligoContext;
@property (copy, nonatomic) NSDictionary *localAddParams;

- (void).cxx_destruct;

@end
