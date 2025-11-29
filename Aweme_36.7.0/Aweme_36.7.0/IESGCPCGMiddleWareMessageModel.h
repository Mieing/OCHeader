@class NSString, NSDictionary;

@interface IESGCPCGMiddleWareMessageModel : NSObject

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSDictionary *data;

- (id)toJson;
- (void).cxx_destruct;

@end
