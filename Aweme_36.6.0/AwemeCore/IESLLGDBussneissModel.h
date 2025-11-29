@class NSString, NSDictionary;

@interface IESLLGDBussneissModel : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSDictionary *sessionParams;

- (void).cxx_destruct;

@end
