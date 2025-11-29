@class NSString, NSDictionary;

@interface BDECRabbiFlyJSWorkerMessageCommand : NSObject

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *data;

- (id)toJSONString;
- (id)initWithEvent:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
