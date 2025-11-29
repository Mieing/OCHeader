@class NSString, NSDictionary;

@interface BDECRabbiFlyJSWorkerEvent : NSObject

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *seqNo;

- (id)initWithEvent:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
